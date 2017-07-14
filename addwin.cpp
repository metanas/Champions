#include "addwin.h"
#include "ui_addwin.h"
#include "mainwindow.h"
#include "addplayer.h"
#include "addequipe.h"
#include <QtSql/QSqlDatabase>
#include "modequipe.h"
#include "affplayer.h"
#include "affequipe.h"
#include "modplayer.h"
#include "suppequipe.h"
#include "suppplayer.h"

extern QSqlDatabase db;
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

    hide();
}

void Addwin::on_Equipe_clicked()
{
    hide();

    if (strMain == "A"){
        AddEquipe *equipe = new AddEquipe(this);
        equipe->show();
    }
    else if (strMain == "F" ){
        affEquipe *equipe = new affEquipe(this);
        equipe->show();
    } else if (strMain == "M" ){
        ModEquipe *equipe = new ModEquipe(this);
        equipe->show();
    }else{
        suppEquipe *equipe = new suppEquipe(this);
        equipe->show();
    }
}

void Addwin::on_pushButton_2_clicked()
{
    hide();
    if (strMain == "A"){
        AddPlayer *player = new AddPlayer(this);
        player->show();
    } else if (strMain == "F"){
        affPlayer *player = new affPlayer(this);
        player->show();
    } else if (strMain == "M"){
        modplayer *player = new modplayer(this);
        player->show();
    }else{
        SuppPlayer *player = new SuppPlayer(this);
        player->show();
    }
}
