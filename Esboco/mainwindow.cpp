#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <QString>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Mult,SIGNAL(clicked()),this,SLOT(on_Mult_clicked()));
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Reiniciar_clicked()
{
    //*RST;
}

void MainWindow::on_Beep_clicked()
{
   // SYST:BEEP TONE;
}



void MainWindow::on_Identificar_clicked()
{
    //QString info (*IDN)
    QString info ("identificação");

    ui->textBrowser->setText(info);

}

void MainWindow::on_Mult_clicked()
{
    objmain1 = new multiemetro;
    objmain1->show();
}

void MainWindow::on_Backlight_toggled(bool checked)
{

}

void MainWindow::on_Backlight_clicked()
{

}

void MainWindow::on_Corrente_clicked()
{
    float corrente=0;
    //corrente = FETC?;
    QString cor ("A corrente é: ");

   ui->textBrowser->setText(cor);
}

void MainWindow::on_Faixa_clicked()
{
    //Abrirá uma nova janela permitindo escolher a faixa de operação do modo atual
}

void MainWindow::on_Status_clicked()
{
   //Qstring status (STAT?);

   //Cada switch informa um dado no quadrado branco do display//
//   switch (status[0]){
//                case 0:
//                   ui->textBrowser->setText("Max/min/avg mode desligado \n");
//                   break;
//                case 1:
//                 ui->textBrowser->setText("Max/min/avg mode ligado \n");
//                 break;
//    }

//    switch (status[1]){
//                 case 0:
//                    ui->textBrowser->setText("Medição relativa desligada \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Medição relativa ligada \n");
//                  break;
//     }

//    switch (status[2]){
//                 case 0:
//                    ui->textBrowser->setText("Trigger hold-log desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Trigger hold-log ligado \n");
//                  break;
//     }

//    switch (status[3]){
//                 case 0:
//                    ui->textBrowser->setText("Auto hold-log desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Auto hold-log ligado \n");
//                  break;
//     }

//    switch (status[4]){
//                 case 0:
//                    ui->textBrowser->setText("Lanterna LED desligada \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Lanterna LED ligada \n");
//                  break;
//     }

//    switch (status[5]){
//                 case 0:
//                    ui->textBrowser->setText("Backligh do LCD desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Backlight do LCD ligado \n");
//                  break;
//     }

//    switch (status[6]){
//                 case 0:
//                    ui->textBrowser->setText("Smoothing desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Smoothing ligado \n");
//                  break;
//     }

//    switch (status[7]){
//                 case 0:
//                    ui->textBrowser->setText("Temp/aux mode desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Temp/aux mode ligado \n");
//                  break;
//     }

//    switch (status[9]){
//                case 0:
//                    ui->textBrowser->setText("Frequência do beep = 4,2 kHz \n");
//                    break;
//                case 1:
//                   ui->textBrowser->setText("Frequência do beep = 3,8 kHz \n");
//                   break;
//                case 2:
//                   ui->textBrowser->setText("Frequência do beep = 3,4 kHz \n");
//                   break;
//                case 3:
//                   ui->textBrowser->setText("Frequência do beep = 3,2 kHz \n");
//                   break;
//                case 4:
//                   ui->textBrowser->setText("Beep desligado \n");
//                   break;
//     }

//    switch (status[10]){
//                 case 0:
//                    ui->textBrowser->setText("Desligamento automático desativado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Desligamento automático ligado \n");
//                  break;
//     }

//    switch (status[15]){
//                case 0:
//                    ui->textBrowser->setText("Posição da roda em V/Zlow \n");
//                    break;
//                case 1:
//                   ui->textBrowser->setText("Posição da roda em Voltagem AC \n");
//                   break;
//                case 2:
//                   ui->textBrowser->setText("Posição da roda em Voltagem DC \n");
//                   break;
//                case 3:
//                   ui->textBrowser->setText("Posição da roda em Resistência \n");
//                   break;
//                case 4:
//                   ui->textBrowser->setText("Posição da roda em Diodo \n");
//                   break;
//                case 5:
//                   ui->textBrowser->setText("Posição da roda em Capacitância \n");
//                   break;
//                case 6:
//                   ui->textBrowser->setText("Posição da roda em Amperímetro \n");
//                   break;
//                case 7:
//                   ui->textBrowser->setText("Posição da roda em Amperímetro (mA) \n");
//                   break;

//     }
//    switch (status[16]){
//                 case 0:
//                    ui->textBrowser->setText("Modo de continuidade desligado \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Modo de continuidade ligado \n");
//                  break;
//     }

//    switch (status[18]){
//                 case 0:
//                    ui->textBrowser->setText("Bateria OK \n");
//                    break;
//                 case 1:
//                  ui->textBrowser->setText("Bateria fraca \n");
//                  break;
//     }


}



void MainWindow::on_Log_clicked()
{
    //Da mesma forma que o Status, cada trecho sera analisado e imprimirá uma informação
    //LOG;
}
