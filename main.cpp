#include "login.h"

#include <QApplication>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    calculator calc;

    w.show();
    QObject::connect(&w, &login::aunt,&calc,[&calc](){calc.show();});

    return a.exec();

}
