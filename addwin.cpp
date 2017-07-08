#include "addwin.h"
#include "ui_addwin.h"

Addwin::Addwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addwin)
{
    ui->setupUi(this);
}

Addwin::~Addwin()
{
    delete ui;
}
