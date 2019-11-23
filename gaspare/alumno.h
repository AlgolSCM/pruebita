#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>

#include <QDialog>
using namespace std;
namespace Ui {
class Alumno;
}

class Alumno : public QDialog
{
    Q_OBJECT

public:
    explicit Alumno(QWidget *parent = nullptr);
    explicit Alumno(string lineaFichero);
    ~Alumno();
    void mostrarDatos();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Alumno *ui;
    void setDatos(string lineaFichero);
    void modificarDatos();

    string nombres, apellidos;
    int dni;
    long long codigoEstudiante;
    char genero;//M o F
    //fecha nacimiento;
    string direccionDomicilio;
    string religion;
    int codigoMatricula,deuda;
    //expedienteMedico expediente;
};

#endif // ALUMNO_H
