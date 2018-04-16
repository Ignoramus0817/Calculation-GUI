/********************************************************************************
** Form generated from reading UI file 'savesuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVESUCCESS_H
#define UI_SAVESUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SaveSuccess
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *SaveSuccess)
    {
        if (SaveSuccess->objectName().isEmpty())
            SaveSuccess->setObjectName(QStringLiteral("SaveSuccess"));
        SaveSuccess->resize(400, 300);
        label = new QLabel(SaveSuccess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 331, 71));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(36);
        label->setFont(font);
        pushButton = new QPushButton(SaveSuccess);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 190, 161, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(22);
        pushButton->setFont(font1);
        label_2 = new QLabel(SaveSuccess);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 371, 31));
        label_2->setFont(font1);

        retranslateUi(SaveSuccess);
        QObject::connect(pushButton, SIGNAL(clicked()), SaveSuccess, SLOT(close()));

        QMetaObject::connectSlotsByName(SaveSuccess);
    } // setupUi

    void retranslateUi(QDialog *SaveSuccess)
    {
        SaveSuccess->setWindowTitle(QApplication::translate("SaveSuccess", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SaveSuccess", "Saving Succeeded !", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SaveSuccess", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("SaveSuccess", "Your history result is in the result.txt file", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaveSuccess: public Ui_SaveSuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVESUCCESS_H
