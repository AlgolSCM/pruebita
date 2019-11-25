#ifndef CURSOSYNOTAS_H
#define CURSOSYNOTAS_H

#include <QDialog>

namespace Ui {
class CursosyNotas;
}

class CursosyNotas : public QDialog
{
    Q_OBJECT

public:
    explicit CursosyNotas(QWidget *parent = nullptr);
    ~CursosyNotas();

private:
    Ui::CursosyNotas *ui;
};

#endif // CURSOSYNOTAS_H
