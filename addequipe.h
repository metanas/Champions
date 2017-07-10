#ifndef ADDEQUIPE_H
#define ADDEQUIPE_H

#include <QDialog>

namespace Ui {
class AddEquipe;
}

class AddEquipe : public QDialog
{
    Q_OBJECT

public:
    explicit AddEquipe(QWidget *parent = 0);
    ~AddEquipe();

private:
    Ui::AddEquipe *ui;
};

#endif // ADDEQUIPE_H
