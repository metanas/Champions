#include "loginwind.h"
#include "ui_loginwind.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "mainwindow.h"
#include "QMessageBox"
#include <QDebug>

extern QSqlDatabase db;
loginwind::loginwind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginwind)
{
    ui->setupUi(this);
    db.open();
}

loginwind::~loginwind()
{
    hide();
}

void loginwind::on_pushButton_clicked()
{
       QString a = ui->lineEdit->text();
       QString b = ui->lineEdit_2->text();
       QSqlQuery req;
       req.prepare("Select User from Users WHERE User='" + ui->lineEdit->text() + "' and Password='" + ui->lineEdit_2->text() + "'");
       req.exec();
       req.next();
       if (!req.value(0).isNull()){
            hide();
            MainWindow *main = new MainWindow(this,ui->lineEdit->text());
            main->show();
       }else
            QMessageBox::critical(this,"user not found", "l'utulisateur ou le mot de passe est incorrect");
}

void loginwind::on_pushButton_2_clicked()
{
    hide();
    MainWindow *main = new MainWindow(this);
    main->show();
}
