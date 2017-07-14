#include "modequipe.h"
#include "ui_modequipe.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
#include <QModelIndex>

extern QSqlDatabase db;
ModEquipe::ModEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModEquipe)
{
    ui->setupUi(this);
}

ModEquipe::~ModEquipe()
{
      hide();
}


void ModEquipe::on_pushButton_clicked()
{
        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery req;
        if (!ui->lineEdit_2->text().isEmpty())
            req.prepare("SELECT * FROM Equipe where Nom='" + ui->lineEdit_2->text() +"'");
        else if (!ui->lineEdit->text().isEmpty())
            req.prepare("SELECT * FROM Equipe where Stade='" + ui->lineEdit->text() + "'");
        else if (!ui->lineEdit_3->text().isEmpty())
            req.prepare("SELECT * FROM Equipe where Entrainneur='" + ui->lineEdit_3->text()+ "'");
        else if (!ui->lineEdit_4->text().isEmpty())
            req.prepare("SELECT * FROM Equipe where Ligue='" + ui->lineEdit_4->text() + "'");
        req.exec();
        modal->setQuery(req);
        ui->tableView->setModel(modal);
}

void ModEquipe::on_tableView_clicked(const QModelIndex &index)
{
        QSqlQuery req;
        if (index.column() == 0){
            req.prepare("Select * from Equipe where Nom='" + index.data().toString() + "'");
            req.exec();
            req.next();

        } else if (index.column() == 1){
            req.prepare("Select * from Equipe where Stade='" + index.data().toString() + "'");
            req.exec();
            req.next();

        }
        else if (index.column() == 2){
            req.prepare("Select * from Equipe where Entrainneur='" + index.data().toString() + "'");
            req.exec();
            req.next();
        }
        ui->lineEdit_2->setText(req.value(0).toString());
        ui->lineEdit->setText(req.value(1).toString());
        ui->lineEdit_3->setText(req.value(2).toString());
        ui->lineEdit_4->setText(req.value(3).toString());
        equipe = ui->lineEdit->text();
}

void ModEquipe::on_pushButton_2_clicked()
{
    QSqlQuery req;
    req.prepare("Update Equipe set Nom='" + ui->lineEdit_2->text() + "', stade='" + ui->lineEdit->text() + "', Entrainneur='" + ui->lineEdit_3->text() + "', liga='" + ui->lineEdit_4->text() + "' where Nom='" + equipe + "'" );
    req.exec();
}

void ModEquipe::on_pushButton_3_clicked()
{
    hide();
}
