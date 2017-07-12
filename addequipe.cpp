#include "addequipe.h"
#include "ui_addequipe.h"
#include "QPixmap"
#include "QFileDialog"
#include "QMessageBox"
#include "mainwindow.h"
#include "addplayer.h"
AddEquipe::AddEquipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEquipe)
{
    ui->setupUi(this);
    QString t = "/home/t530/Downloads/qqqq.jpg";
    AddImage(t);

}

AddEquipe::~AddEquipe()
{
    delete ui;
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
    else if (ui->stade->text().isEmpty())
         ui->stade->setFocus();
    else if (ui->entrainneur->text().isEmpty())
         ui->entrainneur->setFocus();
    else if (ui->Ligue->text().isEmpty())
         ui->Ligue->setFocus();
    else{
        hide();
        AddPlayer *player = new AddPlayer(this,ui->EquipeEqit->text());
        player->show();}
}

void AddEquipe::on_Quit_clicked()
{
   hide();
   MainWindow *main = new MainWindow(this);
   main->show();
}
