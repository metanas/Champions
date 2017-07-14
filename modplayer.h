#ifndef MODPLAYER_H
#define MODPLAYER_H

#include <QDialog>

namespace Ui {
class modplayer;
}

class modplayer : public QDialog
{
    Q_OBJECT

public:
    explicit modplayer(QWidget *parent = 0);
    ~modplayer();

private:
    Ui::modplayer *ui;
};

#endif // MODPLAYER_H
