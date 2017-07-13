#include "affplayer.h"
#include "ui_affplayer.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QDebug>
#include <QDate>
#include "mainwindow.h"

extern QSqlDatabase db;
extern QString user;
affPlayer::affPlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affPlayer)
{
    ui->setupUi(this);
}

affPlayer::~affPlayer()
{
    delete ui;
}

void affPlayer::on_Equipe_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Joueur where Equipe like :c");
    QString a = ui->Equipe->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_Nom_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Joueur where Nom like :c");
    QString a = ui->Nom->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_Prenom_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Joueur where Prenom like :c");
    QString a = ui->Prenom->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_Poste_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    qDebug() << arg1;
    req.prepare("SELECT * FROM Joueur where Poste like :c");
    QString a = arg1 + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_Nast_cursorPositionChanged(int arg1, int arg2)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Joueur where Nationalite like :c");
    QString a = ui->Nast->text() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_dateEdit_dateChanged(const QDate &date)
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery req;
    req.prepare("SELECT * FROM Joueur where Date_de_naissance like :c");
    QString a = date.toString() + "%";
    req.bindValue(":c",a);
    req.exec();
    modal->setQuery(req);
    ui->tableView->setModel(modal);
}

void affPlayer::on_pushButton_clicked()
{
    hide();
}
