#include "mainwindow.h"
#include "alumno.h"
#include "seccion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Alumno camile("Jhoset Gabriel,Abanto Ticona,M,6,4,2013,Calle Daniel Alcides Carrion 101-Malecon Iquique Lt 3-Miraflores,81113375,Cabecitas Reflexivas,81113375,Catolica,1,0");
    camile.show();
    camile.mostrarDatos();



    //w.show();
    return a.exec();
}
