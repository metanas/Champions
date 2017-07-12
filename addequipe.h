#ifndef ADDEQUIPE_H
#define ADDEQUIPE_H

#include <QDialog>
#include "QPixmap"

namespace Ui {
class AddEquipe;
}

class AddEquipe : public QDialog
{
    Q_OBJECT

public:
    explicit AddEquipe(QWidget *parent = 0);
    ~AddEquipe();
    void AddImage(QString="");
    QString ImageFile;

private slots:
    void on_toolButton_clicked();

    void on_AddButton_clicked();

    void on_Quit_clicked();

private:
    Ui::AddEquipe *ui;
};

#endif // ADDEQUIPE_H
