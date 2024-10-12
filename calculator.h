#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>

namespace Ui {
class calculator;
}

class calculator : public QDialog
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;

//public slots:
    //void slot_aunt();
private slots:

    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math();
    void on_pushButton_equals_clicked();
    void on_pushButton_ac_clicked();
};

#endif // CALCULATOR_H
