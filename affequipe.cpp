#include "affequipe.h"
#include "ui_affequipe.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
#include "mainwindow.h"
extern QSqlDatabase db;

affEquipe::affEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affEquipe)
{
    ui->setupUi(this);
}

affEquipe::~affEquipe()
{
    hide();
}

void affEquipe::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
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

void affEquipe::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
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

void affEquipe::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
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

void affEquipe::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
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

void affEquipe::on_pushButton_clicked()
{
    hide();
}
