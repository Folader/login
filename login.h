#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    calculator *calc;
    Ui::login *ui;
signals:
    void aunt();

};
#endif // LOGIN_H
