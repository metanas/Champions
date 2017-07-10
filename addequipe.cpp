#include "addequipe.h"
#include "ui_addequipe.h"

AddEquipe::AddEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEquipe)
{
    ui->setupUi(this);
}

AddEquipe::~AddEquipe()
{
    delete ui;
}
