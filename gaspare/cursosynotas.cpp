#include "cursosynotas.h"
#include "ui_cursosynotas.h"

CursosyNotas::CursosyNotas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CursosyNotas)
{
    ui->setupUi(this);
}

CursosyNotas::~CursosyNotas()
{
    delete ui;
}
