#include "expedientemedico.h"
#include "ui_expedientemedico.h"

expedienteMedico::expedienteMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expedienteMedico)
{
    ui->setupUi(this);
}

expedienteMedico::~expedienteMedico()
{
    delete ui;
}
