#include "addplayer.h"
#include "ui_addplayer.h"
#include "QFileDialog"

AddPlayer::AddPlayer(QWidget *parent,QString equipe) :
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
    if(ui->Equipe->text().isEmpty())
        ui->Equipe->setFocus();
    else if (ui->Nom->text().isEmpty())
        ui->Nom->setFocus();
    else if (ui->Prenom->text().isEmpty())
        ui->Prenom->setFocus();
    else if (ui->Nast->text().isEmpty())
        ui->Nast->setFocus();
    ui->dateEdit->date();
    ui->Num->text();
    ui->Poste->currentText();
}

void AddPlayer::on_pushButton_2_clicked()
{
        this->close();
}

void AddPlayer::on_toolButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"Open a file","/",tr("Image Files (*.png *.jpg *.bmp)"));

    AddImage(file_name);

}
