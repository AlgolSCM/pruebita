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
    ui->nombreAlumno->setText("nombre");

}

void Alumno::on_buttonBox_accepted(){

}

void Alumno::setDatos(string lineaFichero){
    vector <string> fields;
    stringstream ss(lineaFichero);
    string actual;
    while (getline(ss, actual, ','))
        fields.push_back(actual);

}

void Alumno::modificarDatos(){


}





//QString::number(guessNumber)
