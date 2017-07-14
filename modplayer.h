#ifndef MODPLAYER_H
#define MODPLAYER_H

#include <QDialog>
#include <QModelIndex>
namespace Ui {
class modplayer;
}

class modplayer : public QDialog
{
    Q_OBJECT
    QString Player;

public:
    explicit modplayer(QWidget *parent = 0);
    ~modplayer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

private:
    Ui::modplayer *ui;
};

#endif // MODPLAYER_H
