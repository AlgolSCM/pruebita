#include "mainwindow.h"
#include "alumno.h"
#include "seccion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Seccion cabeza;
    cabeza.show();
    //w.show();
    return a.exec();
}
