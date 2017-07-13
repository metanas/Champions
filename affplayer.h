#ifndef AFFPLAYER_H
#define AFFPLAYER_H

#include <QDialog>
#include <QDate>

namespace Ui {
class affPlayer;
}

class affPlayer : public QDialog
{
    Q_OBJECT

public:
    explicit affPlayer(QWidget *parent = 0);
    ~affPlayer();

private slots:
    void on_Equipe_cursorPositionChanged(int arg1, int arg2);

    void on_Nom_cursorPositionChanged(int arg1, int arg2);

    void on_Prenom_cursorPositionChanged(int arg1, int arg2);

    void on_Poste_currentIndexChanged(const QString &arg1);

    void on_Nast_cursorPositionChanged(int arg1, int arg2);

    void on_dateEdit_dateChanged(const QDate &date);

    void on_pushButton_clicked();

private:
    Ui::affPlayer *ui;
};

#endif // AFFPLAYER_H
