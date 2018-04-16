//#define CORE4
//#define CORE7
//#define CORE8
#define CORE15

#include "calgui.h"
#include "ui_calgui.h"
#include "history.h"
#include "savesuccess.h"

#ifdef CORE15
#include "Core15/Core15.h"
#endif

#ifdef CORE8
#include "core8/core-debugx64/include/core.h"
#endif CORE8

#ifdef CORE7
#include "core7/7_ArithmeticDll.h"
#endif

#ifdef CORE4
#include "core4/targetver.h"
#endif CORE4

#include<QTimer>
#include<QString>
#include<string.h>
#include<QFile>
#include<QTextStream>
#include<QDateTime>
#include<QDebug>

CalGUI::CalGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalGUI)
{
    ui->setupUi(this);
    ui->real->setChecked(true);
    ui->fraction->setChecked(true);
    ui->mulDiv->setChecked(true);
    ui->power->setChecked(true);
    ui->qNum->setValue(10);
    ui->oNum->setValue(6);
    ui->precisionSpin->setValue(2);
    ui->oUppRange->setValue(1000);
    ui->oLowRange->setValue(0);
}

CalGUI::~CalGUI()
{
    delete ui;
}

void CalGUI::on_pushButton_4_clicked()
{
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz");
    float correctNum = ui->resultCorrect->text().toFloat();
    float totalNum = ui->resultTotal->text().toFloat();
    float acc = 100.0 * ( correctNum / totalNum );
    QFile result("result.txt");
    if (result.open(QIODevice::Text| QFile::WriteOnly |QIODevice::Append)) {
        QTextStream out(&result);
        out<<"**Result**"<<endl;
        out<<"time:"<<current_date<<endl<<endl;
        out<<"Correct Number:"<<ui->resultCorrect->text()<<" of "<<ui->resultTotal->text()<<endl;
        out<<"Accuracy:"<<acc<<"%"<<endl<<endl;
        out<<"Errors:"<<endl;
        out<<ui->errorBrowser->toPlainText()<<endl;
    }
    SaveSuccess saves;
    saves.show();
    saves.exec();
}


void CalGUI::on_pushButton_5_clicked()
{
   History history;
   history.show();
   history.exec();
}

void CalGUI::on_StartButton_clicked()
{

#ifdef CORE4
    question=core4.getQue();
    answer=core4.getAns();
    ui->questionBrowser->setText(QString::fromStdString(question[0]));
    ui->answer->setText(QString::fromStdString(answer[0]));
#endif

#ifdef CORE7
    core7.generate();
    question=core7.getExpSet();
    answer=core7.getAnsSet();
    ui->questionBrowser->setText(QString::fromStdString(question[0]));
    ui->answer->setText(QString::fromStdString(answer[0]));
#endif


#ifdef CORE8
    core8.Generate(question,answer);
    ui->questionBrowser->setText(QString::fromStdString(question[0]));
    ui->answer->setText(QString::fromStdString(answer[0]));
#endif

#ifdef CORE15
    std::string str1;
    std::string *str2 = new std::string();
    generate(&str1,str2);
    QString question=QString::fromStdString(str1);
    QString answer=QString::fromStdString(*str2);
    ui->questionBrowser->setText(question);
    ui->answer->setText(answer);
#endif

    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&CalGUI::timerUpdate);
    timer->start(1000);
}

void CalGUI::timerUpdate()
{
    int a=ui->RestTime->value();
    if(a>0)
        ui->RestTime->display(a-1);
    else
        ui->qnext->clicked();
}

void CalGUI::timeOut()
{
}

void CalGUI::on_qnext_clicked()
{
    QString str1 = ui->presentQ->text();
    QString str2 = ui->totalQ->text();
    int presentQNum = str1.toInt() + 1;
    int totalQNum = str2.toInt();
    str1 = QString::number(presentQNum);

    QString userAnswer = ui->userAnswer->text();
    if(ui->answer->text()==userAnswer)
        correctNum += 1;
    else if(presentQNum<totalQNum+1)
    {
        QString errors="Question: "+ui->questionBrowser->toPlainText()+"   Your Answer: "+ui->userAnswer->text()+"   Correct Answer: "+ui->answer->text();
        ui->errorBrowser->append(errors);
    }

#ifdef CORE4
    if(i<totalQNum)
    {
        ui->questionBrowser->setText(QString::fromStdString(question[i]));
        ui->answer->setText(QString::fromStdString(answer[i]));
        i++;
    }
#endif

#ifdef CORE7
    if(i<totalQNum)
    {
        ui->questionBrowser->setText(QString::fromStdString(question[i]));
        ui->answer->setText(QString::fromStdString(answer[i]));
        i++;
    }
#endif

#ifdef CORE8
    if(i<totalQNum)
    {
        ui->questionBrowser->setText(QString::fromStdString(question[i]));
        ui->answer->setText(QString::fromStdString(answer[i]));
        i++;
    }
#endif

#ifdef CORE15
    std::string strQ;
    std::string *strA = new std::string();
    generate(&strQ,strA);
    QString question=QString::fromStdString(strQ);
    QString answer=QString::fromStdString(*strA);
    ui->questionBrowser->setText(question);
    ui->answer->setText(answer);
#endif

    if(presentQNum<=totalQNum)
    {
        ui->RestTime->display(20);
        ui->presentQ->setText(str1);
        ui->userAnswer->clear();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(2);
        if(ui->answer->text()==userAnswer)
        {
            if(presentQNum<totalQNum+1)
            {
            QString errors="Question: "+ui->questionBrowser->toPlainText()+"   Your Answer: "+ui->userAnswer->text()+"   Correct Answer: "+ui->answer->text();
            ui->errorBrowser->append(errors);
            }
        }
        ui->resultCorrect->setText(QString::number(correctNum));
        float correctNum = ui->resultCorrect->text().toFloat();
        float totalNum = ui->resultTotal->text().toFloat();
        float acc = 100.0 * ( correctNum / totalNum );
        QString accuracy = QString::number(acc)+"%";
        ui->resultPercen->setText(accuracy);

#ifdef CORE4
        i=1;
#endif

#ifdef CORE8
        i=1;
#endif

#ifdef CORE7
        i=1;
#endif
    }


}

void CalGUI::on_next1_clicked()
{
    int totalQNum = ui->qNum->value();
    QString str = QString::number(totalQNum);
    ui->totalQ->setText(str);
    ui->resultTotal->setText(str);
    ui->qnext->hide();
    ui->answer->show();
   // ui->answer->hide();

#ifdef CORE4
    core4.set_que_num(ui->qNum->value());
    core4.set_data_num(ui->oNum->value());
    core4.set_range(ui->oUppRange->value());

    if(((ui->mulDiv->isChecked())&&(ui->power->isChecked()))==true)
        core4.set_opr_type(3);
    else if(ui->mulDiv->isChecked()==true)
        core4.set_opr_type(2);
    else
        core4.set_opr_type(0);

    if(ui->fraction->isChecked()&&(!ui->real->isChecked()))
        core4.set_data_type(2);
    else if(ui->real->isChecked()&&(!ui->fraction->isChecked()))
        core4.set_data_type(1);
    else if((!ui->real->isChecked())&&(!ui->fraction->isChecked()))
        core4.set_data_type(0);

    core4.set_accuracy(ui->precisionSpin->value());
#endif

#ifdef CORE7
    core7.setExpNum(ui->qNum->value());
    if(ui->real->isChecked())
        core7.setExpType(1);
    else if(ui->fraction->isChecked())
        core7.setExpType(2);
    else
        core7.setExpType(0);
    core7.setBounds(ui->oLowRange->value(),ui->oUppRange->value());
    core7.setOprNum(ui->oNum->value());
    core7.setOprAdd(1);
    core7.setOprSub(1);
    if(ui->mulDiv->isChecked())
    {
        core7.setOprMul(1);
        core7.setOprDiv(1);
    }
    if(ui->power->isChecked())
        core7.setOprPow(1);
    core7.setAccuracy(ui->precisionSpin->value());
#endif

#ifdef CORE8
    core8.Setting("precision",ui->precisionSpin->value());
    if(ui->real->isChecked()==true)
        core8.Setting("calculate_kind",2);
    else if(ui->fraction->isChecked()==true)
        core8.Setting("calculate_kind",1);
    core8.Setting("ProblemNum",ui->qNum->value());
    core8.Setting("OperandNum",oNum);
    core8.Setting('+',true);
    core8.Setting('-',true);
    if(ui->mulDiv->isChecked())
    {
        core8.Setting('*',true);
        core8.Setting('/',true);
    }
    else
    {
        core8.Setting('*',false);
        core8.Setting('/',false);
    }
    if(ui->power->isChecked())
        core8.Setting('^',true);
    else
        core8.Setting('^',false);
    core8.Setting("lrange",ui->oLowRange->value());
    core8.Setting("hrange",ui->oUppRange->value());
#endif

#ifdef CORE15
    set_setting(ui->oNum->value()-1,ui->oUppRange->value(),ui->precisionSpin->value(),ui->fraction->isChecked(),ui->real->isChecked(),ui->mulDiv->isChecked(),ui->power->isChecked());
#endif

    ui->x->display(ui->oNum->value()-1);
    ui->answer->hide();
    ui->stackedWidget->setCurrentIndex(1);
}
