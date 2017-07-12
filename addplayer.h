#ifndef ADDPLAYER_H
#define ADDPLAYER_H

#include <QDialog>

namespace Ui {
class AddPlayer;
}

class AddPlayer : public QDialog
{
    Q_OBJECT
    QString Equipe;
public:
    explicit AddPlayer(QWidget *parent = 0, QString="");
    ~AddPlayer();
    void AddImage(QString file);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_toolButton_clicked();

private:
    Ui::AddPlayer *ui;
};

#endif // ADDPLAYER_H
