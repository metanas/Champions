#include "suppplayer.h"
#include "ui_suppplayer.h"

SuppPlayer::SuppPlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuppPlayer)
{
    ui->setupUi(this);
}

SuppPlayer::~SuppPlayer()
{
    delete ui;
}
