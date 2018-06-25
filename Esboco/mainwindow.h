#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "multiemetro.h"
#include "escolhefaixa.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    multiemetro*objmain1;
    EscolheFaixa*objmain2;
    ~MainWindow();

private slots:
    void on_pushButton_9_clicked();


    void on_Reiniciar_clicked();

    void on_Beep_clicked();

    void on_Backlight_clicked();

    void on_Backlight_toggled(bool checked);

    void on_Identificar_clicked();

    void on_Mult_clicked();

    void on_textEdit_textChanged();

    void on_Corrente_clicked();

    void on_Faixa_clicked();

    void on_Status_clicked();

    void on_Log_clicked();

    void on_PushButton_9_clicked();

    void on_BacklightOn_clicked();

    void on_Bateria_clicked();

    void on_BacklightOff_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
