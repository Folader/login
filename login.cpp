#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString log = ui->log->text();
    QString pass = ui->pass->text();

    if (log == 'a' && pass == 'a')
    {
        hide();
        calc = new calculator(this);
        calc->show();
    }
}

