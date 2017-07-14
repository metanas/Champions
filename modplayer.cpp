#include "modplayer.h"
#include "ui_modplayer.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
#include <QModelIndex>

extern QSqlDatabase db;
modplayer::modplayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modplayer)
{
    ui->setupUi(this);
}

modplayer::~modplayer()
{
    hide();
}

void modplayer::on_pushButton_clicked()
{
    hide();
}

void modplayer::on_pushButton_2_clicked()
{

        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery req;
        if (!ui->Equipe->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where Equipe='" + ui->Equipe->text() +"'");
        else if (!ui->Nom->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where Nom='" + ui->Nom->text() + "'");
        else if (!ui->Prenom->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where Prenom='" + ui->Prenom->text()+ "'");
        else if (!ui->Num->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where Numero='" + ui->Num->text() + "'");
        else if (!ui->dateEdit->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where Date_de_naissance='" + ui->dateEdit->text() + "'");
        else if (!ui->Nast->text().isEmpty())
            req.prepare("SELECT * FROM Joueur where nationalite='" + ui->Nast->text() + "'");
        else if (!ui->Poste->currentText().isEmpty())
            req.prepare("SELECT * FROM Joueur where Poste='" + ui->Poste->currentText() + "'");
        req.exec();
        modal->setQuery(req);
        ui->tableView->setModel(modal);
}

void modplayer::on_tableView_clicked(const QModelIndex &index)
{
    QSqlQuery req;
    if (index.column() == 0){
        req.prepare("SELECT * FROM Joueur where Nom='" + index.data().toString() + "'");
    }
    req.exec();
    req.next();
    ui->Nom->setText(req.value(0).toString());
    ui->Prenom->setText(req.value(1).toString());
    ui->Num->setValue(req.value(2).toInt());
    ui->dateEdit->setDate(req.value(3).toDate());
    ui->Equipe->setText(req.value(4).toString());
    QString post = req.value(5).toString();
    int indx = ui->Poste->findText(post);
    ui->Poste->setCurrentIndex(indx);
    ui->Nast->setText(req.value(6).toString());
    Player = req.value(0).toString();
}

void modplayer::on_pushButton_3_clicked()
{
    QSqlQuery req;
    req.prepare("Update Joueur set Nom='" +ui->Nom->text() + "', Prenom='" + ui->Prenom->text() + "', Numero=" + ui->Num->text() + ", Date_de_naissance='" + ui->dateEdit->text() + "', Equipe='" + ui->Equipe->text() + "', Poste='" +ui->Poste->currentText() + "', Nationalite='" + ui->Nast->text() + "' where Nom='" + Player + "'");
    req.exec();
}
