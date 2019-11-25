#ifndef PADRES_H
#define PADRES_H

#include <QDialog>

namespace Ui {
class Padres;
}

class Padres : public QDialog
{
    Q_OBJECT

public:
    explicit Padres(QWidget *parent = nullptr);
    ~Padres();

private:
    Ui::Padres *ui;
};

#endif // PADRES_H
