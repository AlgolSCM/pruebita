#include "padres.h"
#include "ui_padres.h"

Padres::Padres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Padres)
{
    ui->setupUi(this);
}

Padres::~Padres()
{
    delete ui;
}
