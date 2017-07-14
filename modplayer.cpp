#include "modplayer.h"
#include "ui_modplayer.h"

modplayer::modplayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modplayer)
{
    ui->setupUi(this);
}

modplayer::~modplayer()
{
    delete ui;
}
