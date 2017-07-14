#ifndef SUPPEQUIPE_H
#define SUPPEQUIPE_H

#include <QDialog>
#include <QModelIndex>
namespace Ui {
class suppEquipe;
}

class suppEquipe : public QDialog
{
    Q_OBJECT
    QString equipe;

public:
    explicit suppEquipe(QWidget *parent = 0);
    ~suppEquipe();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::suppEquipe *ui;
};

#endif // SUPPEQUIPE_H
