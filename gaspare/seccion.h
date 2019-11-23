#ifndef SECCION_H
#define SECCION_H
#include "QTabWidget"

#include <QDialog>

namespace Ui {
class Seccion;
}

class Seccion : public QDialog
{
    Q_OBJECT

public:
    explicit Seccion(QWidget *parent = nullptr);
    ~Seccion();
    void resizes(int row,int colum);

private:
    Ui::Seccion *ui;
};

#endif // SECCION_H
