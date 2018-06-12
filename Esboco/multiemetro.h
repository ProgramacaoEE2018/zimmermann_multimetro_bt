#ifndef MULTIEMETRO_H
#define MULTIEMETRO_H

#include <QWidget>

namespace Ui {
class multiemetro;
}

class multiemetro : public QWidget
{
    Q_OBJECT

public:
    explicit multiemetro(QWidget *parent = 0);
    ~multiemetro();

private slots:
    void on_Voltar_clicked();

    void on_dial_rangeChanged(int min, int max);

private:
    Ui::multiemetro *ui;
};

#endif // MULTIEMETRO_H
