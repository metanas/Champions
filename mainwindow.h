#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql/QSqlDatabase>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0, QString="");
    ~MainWindow();
    void AddImage(QString file);


private slots:
    void on_AddButton_clicked();

    void on_ModButton_clicked();

    void on_findButton_clicked();

    void on_DelButton_clicked();

    void on_pushButton_clicked();
    
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
