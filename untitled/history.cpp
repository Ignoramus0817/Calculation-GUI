#include "history.h"
#include "ui_history.h"
#include<QFile>
#include<QTextStream>

History::History(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    QFile result("result.txt");
    if(result.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!result.atEnd())
        {
        QByteArray line = result.readLine();
        QString str(line);
        ui->textBrowser->append(str);
        }
    }
}

History::~History()
{
    delete ui;
}
