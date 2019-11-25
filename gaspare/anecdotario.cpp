#include "anecdotario.h"
#include "ui_anecdotario.h"

anecdotario::anecdotario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::anecdotario)
{
    ui->setupUi(this);
}

anecdotario::~anecdotario()
{
    delete ui;
}
