#include "seccion.h"
#include "ui_seccion.h"

Seccion::Seccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Seccion)
{
    ui->setupUi(this);
    resizes(2,3);
}

Seccion::~Seccion()
{
    delete ui;
}

void Seccion::resizes(int row,int colum){//abajo y costado
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->setColumnCount(colum);
}
