#include "calculator.h"
#include "ui_calculator.h"


double num_first;
<<<<<<< Updated upstream
calculator::calculator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::calculator)
=======
calculator::calculator(QWidget *parent): QWidget(parent)
>>>>>>> Stashed changes
{
    sho = new QLabel("0");
    pushButton_0 = new QPushButton("0");
    pushButton_1 = new QPushButton("1");
    pushButton_2 = new QPushButton("2");
    pushButton_3 = new QPushButton("3");
    pushButton_4 = new QPushButton("4");
    pushButton_5 = new QPushButton("5");
    pushButton_6 = new QPushButton("6");
    pushButton_7 = new QPushButton("7");
    pushButton_8 = new QPushButton("8");
    pushButton_9 = new QPushButton("9");
    pushButton_plus = new QPushButton("+");
    pushButton_minus = new QPushButton("-");
    pushButton_slash = new QPushButton("/");
    pushButton_multiply = new QPushButton("*");
    pushButton_percent = new QPushButton("%");
    pushButton_ac = new QPushButton("AC");
    pushButton_equals = new QPushButton("=");
    pushButton_dot = new QPushButton(".");
    Layv = new QVBoxLayout(this);
    Layg = new QGridLayout(this);

    Layg->setSpacing(5);

    Layg->addWidget(pushButton_ac, 0, 0, 1, 2);
    Layg->addWidget(pushButton_percent, 0, 2);
    Layg->addWidget(pushButton_plus, 0, 3);

    Layg->addWidget(pushButton_1, 1, 0);
    Layg->addWidget(pushButton_2, 1, 1);
    Layg->addWidget(pushButton_3, 1, 2);
    Layg->addWidget(pushButton_minus, 1, 3);

    Layg->addWidget(pushButton_4, 2, 0);
    Layg->addWidget(pushButton_5, 2, 1);
    Layg->addWidget(pushButton_6, 2, 2);
    Layg->addWidget(pushButton_multiply, 2, 3);

    Layg->addWidget(pushButton_7, 3, 0);
    Layg->addWidget(pushButton_8, 3, 1);
    Layg->addWidget(pushButton_9, 3, 2);
    Layg->addWidget(pushButton_slash, 3, 3);

    Layg->addWidget(pushButton_dot, 4, 0);
    Layg->addWidget(pushButton_0, 4, 1);
    Layg->addWidget(pushButton_equals, 4, 2, 1, 2);

    sho->setFixedSize(215, 50);
    pushButton_0->setFixedSize(50, 50);
    pushButton_1->setFixedSize(50, 50);
    pushButton_2->setFixedSize(50, 50);
    pushButton_3->setFixedSize(50, 50);
    pushButton_4->setFixedSize(50, 50);
    pushButton_5->setFixedSize(50, 50);
    pushButton_6->setFixedSize(50, 50);
    pushButton_7->setFixedSize(50, 50);
    pushButton_8->setFixedSize(50, 50);
    pushButton_9->setFixedSize(50, 50);
    pushButton_plus->setFixedSize(50, 50);
    pushButton_minus->setFixedSize(50, 50);
    pushButton_slash->setFixedSize(50, 50);
    pushButton_multiply->setFixedSize(50, 50);
    pushButton_percent->setFixedSize(50, 50);
    pushButton_ac->setFixedSize(105, 50);
    pushButton_equals->setFixedSize(105, 50);
    pushButton_dot->setFixedSize(50, 50);
    sho->setFont(QFont("Arial", 20));
    this->setStyleSheet(
        "QPushButton {"
        "    background-color: lightgray;"
        "    border: none;"
        "}"
        "QPushButton:hover {"
        "    background-color: darkgray;"
        "}"
        );

    Layv->addWidget(sho);
    Layv->addLayout(Layg);

    setLayout(Layv);


    connect(pushButton_0, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_1, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_2, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_3, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_4, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_5, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_6, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_7, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_8, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_9, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(pushButton_percent, SIGNAL(clicked()),this,SLOT(operations()));
    connect(pushButton_minus, SIGNAL(clicked()),this,SLOT(math()));
    connect(pushButton_plus, SIGNAL(clicked()),this,SLOT(math()));
    connect(pushButton_slash, SIGNAL(clicked()),this,SLOT(math()));
    connect(pushButton_equals, SIGNAL(clicked()),this,SLOT(on_pushButton_equals_clicked()));
    connect(pushButton_ac, SIGNAL(clicked()),this,SLOT(on_pushButton_ac_clicked()));
    connect(pushButton_dot, SIGNAL(clicked()),this,SLOT(on_pushButton_dot_clicked()));
    connect(pushButton_multiply, SIGNAL(clicked()),this,SLOT(math()));


    pushButton_plus->setCheckable(true);
    pushButton_minus->setCheckable(true);
    pushButton_slash->setCheckable(true);
    pushButton_multiply->setCheckable(true);



}

calculator::~calculator()
{
}


void calculator::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if (sho->text().contains(".") && button->text() =="0"){
        new_label = sho->text() + button->text();
    } else {
        all_numbers = (sho->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 15);
    }
    all_numbers = (sho->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);

    sho->setText(new_label);
}

void calculator::on_pushButton_dot_clicked()
{
    if(!sho->text().contains('.'))
        sho->setText(sho->text() + ".");
}

void calculator::operations()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;
    if(button->text() == "%"){
        all_numbers = (sho->text() + button->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);

        sho->setText(new_label);
    }
}

void calculator::math()
{
    QPushButton *button = (QPushButton *)sender();

    num_first = sho->text().toDouble();
    sho->setText("");
    button->setChecked(true);
}

void calculator::on_pushButton_equals_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second = sho->text().toDouble();
    if(pushButton_plus->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        sho->setText(new_label);
        pushButton_plus->setChecked(false);
    } else if(pushButton_minus->isChecked()){
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        sho->setText(new_label);
        pushButton_minus->setChecked(false);
    } else if(pushButton_multiply->isChecked()){
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);

        sho->setText(new_label);
        pushButton_multiply->setChecked(false);
    } else if(pushButton_slash->isChecked()){
        if(num_second ==0){
            sho->setText("0");
        } else{
            labelNumber = num_first / num_second;
            new_label = QString::number(labelNumber, 'g', 15);

            sho->setText(new_label);
        }
        pushButton_slash->setChecked(false);
    }
}


void calculator::on_pushButton_ac_clicked()
{
    pushButton_plus->setChecked(false);
    pushButton_minus->setChecked(false);
    pushButton_multiply->setChecked(false);
    pushButton_slash->setChecked(false);

    sho->setText("0");
}

