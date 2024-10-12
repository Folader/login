/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_slash;
    QLabel *show;

    void setupUi(QDialog *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(200, 290);
        pushButton_1 = new QPushButton(calculator);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 190, 50, 50));
        pushButton_6 = new QPushButton(calculator);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(100, 140, 50, 50));
        pushButton_5 = new QPushButton(calculator);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 140, 50, 50));
        pushButton_4 = new QPushButton(calculator);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 140, 50, 50));
        pushButton_2 = new QPushButton(calculator);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 190, 50, 50));
        pushButton_plus = new QPushButton(calculator);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(150, 190, 50, 50));
        pushButton_equals = new QPushButton(calculator);
        pushButton_equals->setObjectName(QString::fromUtf8("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(150, 240, 50, 50));
        pushButton_dot = new QPushButton(calculator);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(100, 240, 50, 50));
        pushButton_0 = new QPushButton(calculator);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 240, 101, 50));
        pushButton_minus = new QPushButton(calculator);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(150, 140, 50, 50));
        pushButton_3 = new QPushButton(calculator);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 190, 50, 50));
        pushButton_9 = new QPushButton(calculator);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(100, 90, 50, 50));
        pushButton_multiply = new QPushButton(calculator);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(150, 90, 50, 50));
        pushButton_8 = new QPushButton(calculator);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 90, 50, 50));
        pushButton_7 = new QPushButton(calculator);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 90, 50, 50));
        pushButton_ac = new QPushButton(calculator);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(0, 40, 101, 50));
        pushButton_percent = new QPushButton(calculator);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(100, 40, 50, 50));
        pushButton_slash = new QPushButton(calculator);
        pushButton_slash->setObjectName(QString::fromUtf8("pushButton_slash"));
        pushButton_slash->setGeometry(QRect(150, 40, 50, 50));
        show = new QLabel(calculator);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(0, 0, 201, 41));
        QFont font;
        font.setPointSize(29);
        show->setFont(font);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QDialog *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "Dialog", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("calculator", "+", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("calculator", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("calculator", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("calculator", "_", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("calculator", "x", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("calculator", "%", nullptr));
        pushButton_slash->setText(QCoreApplication::translate("calculator", "/", nullptr));
        show->setText(QCoreApplication::translate("calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
