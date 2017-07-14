#ifndef MODEQUIPE_H
#define MODEQUIPE_H

#include <QDialog>
#include <QModelIndex>
namespace Ui {
class ModEquipe;
}

class ModEquipe : public QDialog
{
    Q_OBJECT
    QString equipe;

public:
    explicit ModEquipe(QWidget *parent = 0);
    ~ModEquipe();

private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ModEquipe *ui;
};

#endif // MODEQUIPE_H
