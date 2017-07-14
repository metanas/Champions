#include "suppequipe.h"
#include "ui_suppequipe.h"

suppEquipe::suppEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suppEquipe)
{
    ui->setupUi(this);
}

suppEquipe::~suppEquipe()
{
    delete ui;
}
