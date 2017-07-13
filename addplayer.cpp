#include "addplayer.h"
#include "ui_addplayer.h"
#include "QFileDialog"
#include "mainwindow.h"
#include "QMessageBox"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
extern QSqlDatabase db;
AddPlayer::AddPlayer(QWidget *parent, QString equipe) :
    QDialog(parent),
    ui(new Ui::AddPlayer)
{
    ui->setupUi(this);
    Equipe = equipe;
    QString t = "/home/t530/Downloads/Scream.jpg";
    AddImage(t);
    ui->Equipe->setText(Equipe);
}

AddPlayer::~AddPlayer()
{
    delete ui;
}


void AddPlayer::AddImage(QString file){

    if (!file.isNull()){
        QPixmap imageLabel(file);
        int w = ui->Image->width();
        int h = ui->Image->height();
        ui->Image->setPixmap(imageLabel.scaled(w,h,Qt::KeepAspectRatio));
    }

}

void AddPlayer::on_pushButton_clicked()
{
      QString a =  ui->Equipe->text();
      QString b = ui->Nom->text();
      QString c = ui->Prenom->text();

    if(ui->Equipe->text().isEmpty())
        ui->Equipe->setFocus();
    else if (ui->Nom->text().isEmpty())
        ui->Nom->setFocus();
    else if (ui->Prenom->text().isEmpty())
        ui->Prenom->setFocus();
    else if (ui->Nast->text().isEmpty())
        ui->Nast->setFocus();
    else {
    QDate d = ui->dateEdit->date();
    QString e =ui->Num->text();
    QString f = ui->Poste->currentText();
    QString g = ui->Nast->text();
    QSqlQuery req;
    req.prepare("INSERT INTO Joueur VALUES (:Nom, :Prenom, :Numero, :Date, :Equipe, :Poste, :Nast)");
    req.bindValue(":Nom", b);
    req.bindValue(":Prenom", c);
    req.bindValue(":Numero", e);
    req.bindValue("Date", d);
    req.bindValue(":Equipe",a);
    req.bindValue(":Poste",f);
    req.bindValue(":Nast",g);
    req.exec();
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    ui->Nast->setText("");
    ui->Nom->setText("");
    ui->Prenom->setText("");
    }
}

void AddPlayer::on_pushButton_2_clicked()
{
        hide();
}

void AddPlayer::on_toolButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"Open a file","/",tr("Image Files (*.png *.jpg *.bmp)"));
    AddImage(file_name);
}
