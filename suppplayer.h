#ifndef SUPPPLAYER_H
#define SUPPPLAYER_H

#include <QDialog>
#include <QModelIndex>
namespace Ui {
class SuppPlayer;
}

class SuppPlayer : public QDialog
{
    Q_OBJECT
    QString Player;

public:
    explicit SuppPlayer(QWidget *parent = 0);
    ~SuppPlayer();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::SuppPlayer *ui;
};

#endif // SUPPPLAYER_H
