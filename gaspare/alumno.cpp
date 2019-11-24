#include "alumno.h"
#include "ui_alumno.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
Alumno::Alumno(QWidget *parent) :QDialog(parent),ui(new Ui::Alumno){ui->setupUi(this);}

Alumno::Alumno(string lineaFichero) :ui(new Ui::Alumno){
    ui->setupUi(this);
    setDatos(lineaFichero);
}

Alumno::~Alumno(){delete ui;}

void Alumno::mostrarDatos(){
    ui->nombreAlumno->setText(nombres);
    ui->apellidoAlumno->setText(apellidos);
    ui->formReligion->setText(religion);
    ui->formDireccion->setText(direccionDomicilio);
    ui->diaNacimiento->setValue(nacimiento.dia);
    ui->MesNacimiento->setValue(nacimiento.mes);
    ui->AnioNacimiento->setValue(nacimiento.anio);
    ui->FormDni->setValue(dni);
    ui->codigoEstudiante->setValue(codigoEstudiante);
    ui->formDireccion->setText(direccionDomicilio);
    ui->formMatricula->setValue(codigoMatricula);

}

void Alumno::on_buttonBox_accepted(){

}

void Alumno::setDatos(string lineaFichero){
    vector <string> fields;
    stringstream ss(lineaFichero);
    string actual;
    while (getline(ss, actual, ','))
        fields.push_back(actual);
    nombres=QString::fromStdString(fields[0]);
    apellidos=QString::fromStdString(fields[1]);
    genero=fields[2][0];
    nacimiento=fecha(stoi(fields[3]),stoi(fields[4]),stoi(fields[5]));
    direccionDomicilio=QString::fromStdString(fields[6]);
    dni=stoi(fields[7]);
    codigoEstudiante=stoi(fields[9]);
    religion=QString::fromStdString(fields[10]);
    codigoMatricula=stoi(fields[11]);
    deuda=stoi(fields[12]);
}

void Alumno::modificarDatos(){


}





//QString::number(guessNumber)
