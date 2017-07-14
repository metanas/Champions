#include "addequipe.h"
#include "ui_addequipe.h"
#include "QPixmap"
#include "QFileDialog"
#include "QMessageBox"
#include "mainwindow.h"
#include "addplayer.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>

extern QSqlDatabase db;
AddEquipe::AddEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEquipe)
{
    ui->setupUi(this);
    QString t = "/home/t530/Downloads/qqqq.jpg";
    AddImage(t);
    QSqlQuery *query = new QSqlQuery("select Nom from Stade");
            while(query->next())
            {
                ui->comboBox->addItem(query->value(0).toString());
            }

}

AddEquipe::~AddEquipe()
{
    hide();
}

void AddEquipe::on_toolButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"Open a file","/",tr("Image Files (*.png *.jpg *.bmp)"));

    AddImage(file_name);
}

void AddEquipe::AddImage(QString file){

    if (!file.isNull()){
        ImageFile = file;
        QPixmap imageLabel(ImageFile);
        int w = ui->Image->width();
        int h = ui->Image->height();
        ui->Image->setPixmap(imageLabel.scaled(w,h,Qt::KeepAspectRatio));
    }

}

void AddEquipe::on_AddButton_clicked()
{
    if (ImageFile == "/home/t530/Downloads/qqqq.jpg")
        QMessageBox::critical(this, "Not Found","Choisie une photo pour l'equipe");
    else if (ui->EquipeEqit->text().isEmpty())
        ui->EquipeEqit->setFocus();
    else if (ui->entrainneur->text().isEmpty())
         ui->entrainneur->setFocus();
    else if (ui->Ligue->text().isEmpty())
         ui->Ligue->setFocus();
    else{
        hide();
        QSqlQuery req;
        req.prepare("INSERT INTO Equipe VALUES (:Nom, :stade, :Entrainneur, :Ligue)");
        req.bindValue(":Nom", ui->EquipeEqit->text());
        req.bindValue(":stade", ui->comboBox->currentText());
        req.bindValue(":Entrainneur", ui->entrainneur->text());
        req.bindValue(":Ligue", ui->Ligue->text());
        req.exec();
        AddPlayer *player = new AddPlayer(this,ui->EquipeEqit->text());
        player->show();
    }
}

void AddEquipe::on_Quit_clicked()
{
   hide();
}
