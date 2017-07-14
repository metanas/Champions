#ifndef SUPPPLAYER_H
#define SUPPPLAYER_H

#include <QDialog>

namespace Ui {
class SuppPlayer;
}

class SuppPlayer : public QDialog
{
    Q_OBJECT

public:
    explicit SuppPlayer(QWidget *parent = 0);
    ~SuppPlayer();

private:
    Ui::SuppPlayer *ui;
};

#endif // SUPPPLAYER_H
