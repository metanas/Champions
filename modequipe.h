#ifndef MODEQUIPE_H
#define MODEQUIPE_H

#include <QDialog>

namespace Ui {
class ModEquipe;
}

class ModEquipe : public QDialog
{
    Q_OBJECT

public:
    explicit ModEquipe(QWidget *parent = 0);
    ~ModEquipe();

private slots:
    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::ModEquipe *ui;
};

#endif // MODEQUIPE_H
