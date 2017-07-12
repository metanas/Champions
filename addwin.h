#ifndef ADDWIN_H
#define ADDWIN_H

#include <QDialog>

namespace Ui {
class Addwin;
}

class Addwin : public QDialog
{
    Q_OBJECT

public:
    explicit Addwin(QWidget *parent = 0, QString str="");
    ~Addwin();
    QString strMain;
private slots:

    void on_Equipe_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Addwin *ui;
};

#endif // ADDWIN_H
