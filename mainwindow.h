#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_AddButton_clicked();

    void on_ModButton_clicked();

    void on_findButton_clicked();

    void on_DelButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
