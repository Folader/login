#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QPixmap>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QGridLayout>



class calculator : public QWidget
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();
private:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_slash;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_dot;
    QLabel *sho;

    QVBoxLayout *Layv;
    QGridLayout *Layg;







private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math();
    void on_pushButton_equals_clicked();
    void on_pushButton_ac_clicked();
};

#endif // CALCULATOR_H
