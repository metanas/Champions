#ifndef AFFEQUIPE_H
#define AFFEQUIPE_H

#include <QDialog>

namespace Ui {
class affEquipe;
}

class affEquipe : public QDialog
{
    Q_OBJECT

public:
    explicit affEquipe(QWidget *parent = 0);
    ~affEquipe();

private slots:
    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

private:
    Ui::affEquipe *ui;
};

#endif // AFFEQUIPE_H
