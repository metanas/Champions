#include "modequipe.h"
#include "ui_modequipe.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
extern QSqlDatabase db;
ModEquipe::ModEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModEquipe)
{
    ui->setupUi(this);
}

ModEquipe::~ModEquipe()
{
      delete ui;
}

void ModEquipe::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Equipe where Nom like :c");
    QString a = ui->lineEdit_2->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void ModEquipe::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Equipe where Stade like :c");
    QString a = ui->lineEdit->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void ModEquipe::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Equipe where Entrainneur like :c");
    QString a = ui->lineEdit_3->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void ModEquipe::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Equipe where Ligue like :c");
    QString a = ui->lineEdit_4->text() + "%";
    req.bindValue(":c", a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}
