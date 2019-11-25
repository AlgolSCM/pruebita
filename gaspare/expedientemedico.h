#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H

#include <QDialog>

namespace Ui {
class expedienteMedico;
}

class expedienteMedico : public QDialog
{
    Q_OBJECT

public:
    explicit expedienteMedico(QWidget *parent = nullptr);
    ~expedienteMedico();

private:
    Ui::expedienteMedico *ui;
};

#endif // EXPEDIENTEMEDICO_H
