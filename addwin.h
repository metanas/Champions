#ifndef ADDWIN_H
#define ADDWIN_H

#include <QDialog>

namespace Ui {
class Addwin;
}

class Addwin : public QDialog
{
    Q_OBJECT

public:
    explicit Addwin(QWidget *parent = 0);
    ~Addwin();

private:
    Ui::Addwin *ui;
};

#endif // ADDWIN_H
