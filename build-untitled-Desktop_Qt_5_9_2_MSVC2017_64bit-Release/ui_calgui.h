/********************************************************************************
** Form generated from reading UI file 'calgui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALGUI_H
#define UI_CALGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalGUI
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *next1;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *fraction;
    QCheckBox *real;
    QSpacerItem *verticalSpacer_3;
    QSpinBox *oLowRange;
    QSpinBox *oUppRange;
    QSpinBox *oNum;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpinBox *qNum;
    QLabel *label_19;
    QSpinBox *precisionSpin;
    QSpacerItem *verticalSpacer;
    QLabel *precision;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *mulDiv;
    QCheckBox *power;
    QWidget *page_2;
    QLabel *label_8;
    QTextBrowser *questionBrowser;
    QLabel *label_9;
    QLineEdit *userAnswer;
    QLabel *label_10;
    QLabel *presentQ;
    QLabel *totalQ;
    QPushButton *qnext;
    QLCDNumber *RestTime;
    QPushButton *StartButton;
    QLineEdit *answer;
    QLCDNumber *x;
    QWidget *page_3;
    QLabel *label_13;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QTextBrowser *errorBrowser;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *resultPercen;
    QLabel *resultTotal;
    QLabel *resultCorrect;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *CalGUI)
    {
        if (CalGUI->objectName().isEmpty())
            CalGUI->setObjectName(QStringLiteral("CalGUI"));
        CalGUI->resize(639, 407);
        centralWidget = new QWidget(CalGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 591, 371));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 241, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 90, 171, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 260, 241, 21));
        label_7->setFont(font1);
        horizontalLayoutWidget_2 = new QWidget(page);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(160, 290, 261, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        next1 = new QPushButton(horizontalLayoutWidget_2);
        next1->setObjectName(QStringLiteral("next1"));
        next1->setFont(font1);

        horizontalLayout_3->addWidget(next1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_2);

        gridLayoutWidget_2 = new QWidget(page);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(80, 120, 508, 132));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        fraction = new QCheckBox(gridLayoutWidget_2);
        fraction->setObjectName(QStringLiteral("fraction"));

        gridLayout_2->addWidget(fraction, 6, 0, 1, 2);

        real = new QCheckBox(gridLayoutWidget_2);
        real->setObjectName(QStringLiteral("real"));

        gridLayout_2->addWidget(real, 6, 3, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 0, 1, 1);

        oLowRange = new QSpinBox(gridLayoutWidget_2);
        oLowRange->setObjectName(QStringLiteral("oLowRange"));
        oLowRange->setMinimum(-999999);
        oLowRange->setMaximum(999999);

        gridLayout_2->addWidget(oLowRange, 0, 3, 1, 1);

        oUppRange = new QSpinBox(gridLayoutWidget_2);
        oUppRange->setObjectName(QStringLiteral("oUppRange"));
        oUppRange->setMinimum(-999999);
        oUppRange->setMaximum(999999);
        oUppRange->setValue(100);

        gridLayout_2->addWidget(oUppRange, 0, 5, 1, 1);

        oNum = new QSpinBox(gridLayoutWidget_2);
        oNum->setObjectName(QStringLiteral("oNum"));
        oNum->setMinimum(1);
        oNum->setMaximum(5);
        oNum->setValue(3);

        gridLayout_2->addWidget(oNum, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        qNum = new QSpinBox(gridLayoutWidget_2);
        qNum->setObjectName(QStringLiteral("qNum"));
        qNum->setMinimum(1);
        qNum->setMaximum(999999);

        gridLayout_2->addWidget(qNum, 0, 1, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 0, 4, 1, 1);

        precisionSpin = new QSpinBox(gridLayoutWidget_2);
        precisionSpin->setObjectName(QStringLiteral("precisionSpin"));
        precisionSpin->setValue(2);

        gridLayout_2->addWidget(precisionSpin, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        precision = new QLabel(gridLayoutWidget_2);
        precision->setObjectName(QStringLiteral("precision"));

        gridLayout_2->addWidget(precision, 2, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        mulDiv = new QCheckBox(gridLayoutWidget_2);
        mulDiv->setObjectName(QStringLiteral("mulDiv"));

        gridLayout_2->addWidget(mulDiv, 4, 1, 1, 2);

        power = new QCheckBox(gridLayoutWidget_2);
        power->setObjectName(QStringLiteral("power"));

        gridLayout_2->addWidget(power, 4, 3, 1, 3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 50, 101, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(18);
        label_8->setFont(font2);
        questionBrowser = new QTextBrowser(page_2);
        questionBrowser->setObjectName(QStringLiteral("questionBrowser"));
        questionBrowser->setGeometry(QRect(30, 100, 331, 91));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 250, 121, 31));
        label_9->setFont(font2);
        userAnswer = new QLineEdit(page_2);
        userAnswer->setObjectName(QStringLiteral("userAnswer"));
        userAnswer->setGeometry(QRect(150, 250, 121, 31));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 310, 21, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(20);
        label_10->setFont(font3);
        presentQ = new QLabel(page_2);
        presentQ->setObjectName(QStringLiteral("presentQ"));
        presentQ->setGeometry(QRect(430, 310, 91, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(36);
        presentQ->setFont(font4);
        totalQ = new QLabel(page_2);
        totalQ->setObjectName(QStringLiteral("totalQ"));
        totalQ->setGeometry(QRect(510, 310, 161, 41));
        totalQ->setFont(font4);
        qnext = new QPushButton(page_2);
        qnext->setObjectName(QStringLiteral("qnext"));
        qnext->setGeometry(QRect(430, 250, 111, 41));
        qnext->setFont(font2);
        RestTime = new QLCDNumber(page_2);
        RestTime->setObjectName(QStringLiteral("RestTime"));
        RestTime->setGeometry(QRect(440, 110, 101, 51));
        RestTime->setSmallDecimalPoint(false);
        RestTime->setDigitCount(5);
        RestTime->setProperty("value", QVariant(20));
        RestTime->setProperty("intValue", QVariant(20));
        StartButton = new QPushButton(page_2);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(30, 310, 101, 41));
        StartButton->setFont(font2);
        answer = new QLineEdit(page_2);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(160, 60, 113, 20));
        x = new QLCDNumber(page_2);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(400, 60, 64, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 20, 111, 51));
        QFont font5;
        font5.setFamily(QStringLiteral("Agency FB"));
        font5.setPointSize(26);
        label_13->setFont(font5);
        gridLayoutWidget = new QWidget(page_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 70, 521, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font6;
        font6.setFamily(QStringLiteral("Agency FB"));
        font6.setPointSize(16);
        label_11->setFont(font6);

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        errorBrowser = new QTextBrowser(gridLayoutWidget);
        errorBrowser->setObjectName(QStringLiteral("errorBrowser"));

        gridLayout->addWidget(errorBrowser, 3, 0, 1, 5);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font6);

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font6);

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font6);

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        resultPercen = new QLabel(gridLayoutWidget);
        resultPercen->setObjectName(QStringLiteral("resultPercen"));
        resultPercen->setFont(font6);

        gridLayout->addWidget(resultPercen, 1, 2, 1, 3);

        resultTotal = new QLabel(gridLayoutWidget);
        resultTotal->setObjectName(QStringLiteral("resultTotal"));
        resultTotal->setFont(font6);

        gridLayout->addWidget(resultTotal, 0, 4, 1, 1);

        resultCorrect = new QLabel(gridLayoutWidget);
        resultCorrect->setObjectName(QStringLiteral("resultCorrect"));
        resultCorrect->setFont(font6);

        gridLayout->addWidget(resultCorrect, 0, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(page_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 300, 381, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font2);

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font2);

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font2);

        horizontalLayout->addWidget(pushButton_6);

        stackedWidget->addWidget(page_3);
        CalGUI->setCentralWidget(centralWidget);

        retranslateUi(CalGUI);
        QObject::connect(pushButton_2, SIGNAL(clicked()), CalGUI, SLOT(close()));
        QObject::connect(StartButton, SIGNAL(clicked()), StartButton, SLOT(hide()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), CalGUI, SLOT(close()));
        QObject::connect(StartButton, SIGNAL(clicked()), qnext, SLOT(show()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CalGUI);
    } // setupUi

    void retranslateUi(QMainWindow *CalGUI)
    {
        CalGUI->setWindowTitle(QApplication::translate("CalGUI", "CalGUI", Q_NULLPTR));
        label->setText(QApplication::translate("CalGUI", "Calculation Excercise", Q_NULLPTR));
        label_2->setText(QApplication::translate("CalGUI", "Please set properties.", Q_NULLPTR));
        label_7->setText(QApplication::translate("CalGUI", "Push Next button to start your exercise!", Q_NULLPTR));
        next1->setText(QApplication::translate("CalGUI", "Next", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CalGUI", "Cancel", Q_NULLPTR));
        fraction->setText(QApplication::translate("CalGUI", "Fraction", Q_NULLPTR));
        real->setText(QApplication::translate("CalGUI", "Real", Q_NULLPTR));
        label_4->setText(QApplication::translate("CalGUI", "Number of operands", Q_NULLPTR));
        label_3->setText(QApplication::translate("CalGUI", "Number of Questions", Q_NULLPTR));
        label_19->setText(QApplication::translate("CalGUI", "to", Q_NULLPTR));
        precision->setText(QApplication::translate("CalGUI", "Precision", Q_NULLPTR));
        label_5->setText(QApplication::translate("CalGUI", "Range of operands", Q_NULLPTR));
        label_6->setText(QApplication::translate("CalGUI", "Type of operands:", Q_NULLPTR));
        mulDiv->setText(QApplication::translate("CalGUI", "*/\303\267", Q_NULLPTR));
        power->setText(QApplication::translate("CalGUI", "power", Q_NULLPTR));
        label_8->setText(QApplication::translate("CalGUI", "Question", Q_NULLPTR));
        label_9->setText(QApplication::translate("CalGUI", "Your Answer:", Q_NULLPTR));
        label_10->setText(QApplication::translate("CalGUI", "OF", Q_NULLPTR));
        presentQ->setText(QApplication::translate("CalGUI", "1", Q_NULLPTR));
        totalQ->setText(QApplication::translate("CalGUI", "10", Q_NULLPTR));
        qnext->setText(QApplication::translate("CalGUI", "Next", Q_NULLPTR));
        StartButton->setText(QApplication::translate("CalGUI", "Start", Q_NULLPTR));
        label_13->setText(QApplication::translate("CalGUI", "Result", Q_NULLPTR));
        label_11->setText(QApplication::translate("CalGUI", "of", Q_NULLPTR));
        label_16->setText(QApplication::translate("CalGUI", "Accuracy", Q_NULLPTR));
        label_14->setText(QApplication::translate("CalGUI", "Correct Questions", Q_NULLPTR));
        label_18->setText(QApplication::translate("CalGUI", "Errors", Q_NULLPTR));
        resultPercen->setText(QApplication::translate("CalGUI", "0.00%", Q_NULLPTR));
        resultTotal->setText(QApplication::translate("CalGUI", "10", Q_NULLPTR));
        resultCorrect->setText(QApplication::translate("CalGUI", "0", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CalGUI", "Save", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("CalGUI", "History", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("CalGUI", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalGUI: public Ui_CalGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALGUI_H
