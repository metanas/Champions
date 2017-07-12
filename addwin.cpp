#include "addwin.h"
#include "ui_addwin.h"
#include "mainwindow.h"
#include "addplayer.h"
#include "addequipe.h"

Addwin::Addwin(QWidget *parent,QString str) :
    QDialog(parent),
    ui(new Ui::Addwin)
{
    ui->setupUi(this);
    QString Set;
    strMain = str;
    if (strMain=="A")
        Set = "Que voulez-vous Ajouter" ;
    else if (strMain=="M")
        Set = "Que voulez-vous Modifier" ;
    else if (strMain == "D")
        Set = "Que voulez-vous Supprimer" ;
    else
        Set = "Que voulez-vous chercher" ;
    ui->label->setText(Set);
    ui->label->setAlignment(Qt::AlignHCenter);
}

Addwin::~Addwin()
{

    delete ui;
}

void Addwin::on_Equipe_clicked()
{
    hide();
    if (strMain == "A"){
        AddEquipe *equipe = new AddEquipe(this);
        equipe->show();}
}

void Addwin::on_pushButton_2_clicked()
{
    hide();
    if (strMain == "A"){
        AddPlayer *player = new AddPlayer(this);
        player->show();}
}
