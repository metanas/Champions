#ifndef SUPPEQUIPE_H
#define SUPPEQUIPE_H

#include <QDialog>

namespace Ui {
class suppEquipe;
}

class suppEquipe : public QDialog
{
    Q_OBJECT

public:
    explicit suppEquipe(QWidget *parent = 0);
    ~suppEquipe();

private:
    Ui::suppEquipe *ui;
};

#endif // SUPPEQUIPE_H
