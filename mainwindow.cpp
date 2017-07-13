#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "addwin.h"
#include "iostream"
#include "loginwind.h"
QString user;
QSqlDatabase db;
MainWindow::MainWindow(QWidget *parent,QString usr) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str;
    user = usr;
    if (user == ""){
        ui->AddButton->setEnabled(false);
        ui->DelButton->setEnabled(false);
        ui->ModButton->setEnabled(false);
        ui->pushButton->setEnabled(false);
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
    } else{
        ui->AddButton->setEnabled(true);
        ui->DelButton->setEnabled(true);
        ui->ModButton->setEnabled(true);
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(true);
    }
    if (!db.isOpen()){
        db=QSqlDatabase::addDatabase("QMYSQL");
            db.setHostName("localhost");
            db.setUserName("root");
            db.setPassword("q");
            db.setDatabaseName("Champions");
            db.open();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked()
{
    Addwin *addwin = new Addwin(this,"A");
    addwin->show();
}

void MainWindow::on_ModButton_clicked()
{
    Addwin *addwin = new Addwin(this,"M");
    addwin->show();
}

void MainWindow::on_findButton_clicked()
{
    Addwin *addwin = new Addwin(this,"F");
    addwin->show();
}

void MainWindow::on_DelButton_clicked()
{
    Addwin *addwin = new Addwin(this,"M");
    addwin->show();
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    loginwind *login = new loginwind(this);
    login->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    MainWindow *main = new MainWindow(this);
    main->show();
}
