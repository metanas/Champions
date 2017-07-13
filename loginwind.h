#ifndef LOGINWIND_H
#define LOGINWIND_H

#include <QDialog>

namespace Ui {
class loginwind;
}

class loginwind : public QDialog
{
    Q_OBJECT

public:
    explicit loginwind(QWidget *parent = 0);
    ~loginwind();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::loginwind *ui;
};

#endif // LOGINWIND_H
