#include "calculator.h"
#include "ui_calculator.h"


double num_first;
calculator::calculator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_percent, SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()),this,SLOT(math()));
    connect(ui->pushButton_plus, SIGNAL(clicked()),this,SLOT(math()));
    connect(ui->pushButton_slash, SIGNAL(clicked()),this,SLOT(math()));
    connect(ui->pushButton_multiply, SIGNAL(clicked()),this,SLOT(math()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_slash->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);

}

calculator::~calculator()
{
    delete ui;
}

void calculator::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if (ui->show->text().contains(".") && button->text() =="0"){
        new_label = ui->show->text() + button->text();
    } else {
        all_numbers = (ui->show->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 15);
    }
    all_numbers = (ui->show->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);

    ui->show->setText(new_label);
}

void calculator::on_pushButton_dot_clicked()
{
    if(ui->show->text().contains('.'))
        ui->show->setText(ui->show->text() + ".");
}

void calculator::operations()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;
    if(button->text() == "%"){
        all_numbers = (ui->show->text() + button->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);

        ui->show->setText(new_label);
    }
}

void calculator::math()
{
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->show->text().toDouble();
    ui->show->setText("");
    button->setChecked(true);
}

void calculator::on_pushButton_equals_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second = ui->show->text().toDouble();
    if(ui->pushButton_plus->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->show->setText(new_label);
        ui->pushButton_plus->setChecked(false);
    } else if(ui->pushButton_minus->isChecked()){
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->show->setText(new_label);
        ui->pushButton_minus->setChecked(false);
    } else if(ui->pushButton_multiply->isChecked()){
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        ui->show->setText(new_label);
        ui->pushButton_multiply->setChecked(false);
    } else if(ui->pushButton_slash->isChecked()){
        if(num_second ==0){
            ui->show->setText("0");
        } else{
            labelNumber = num_first / num_second;
            new_label = QString::number(labelNumber, 'g', 15);

            ui->show->setText(new_label);
        }
        ui->pushButton_slash->setChecked(false);
    }
}


void calculator::on_pushButton_ac_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_slash->setChecked(false);

    ui->show->setText("0");
}

