#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "addwin.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddButton_clicked()
{
    hide();
    Addwin *addwin = new Addwin(this,"A");
    addwin->show();
}

void MainWindow::on_ModButton_clicked()
{
    hide();
    Addwin *addwin = new Addwin(this,"M");
    addwin->show();
}

void MainWindow::on_findButton_clicked()
{
    hide();
    Addwin *addwin = new Addwin(this,"F");
    addwin->show();
}

void MainWindow::on_DelButton_clicked()
{
    hide();
    Addwin *addwin = new Addwin(this,"M");
    addwin->show();
}
