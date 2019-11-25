#ifndef ANECDOTARIO_H
#define ANECDOTARIO_H

#include <QDialog>

namespace Ui {
class anecdotario;
}

class anecdotario : public QDialog
{
    Q_OBJECT

public:
    explicit anecdotario(QWidget *parent = nullptr);
    ~anecdotario();

private:
    Ui::anecdotario *ui;
};

#endif // ANECDOTARIO_H
