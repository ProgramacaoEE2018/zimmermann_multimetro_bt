#include "escolhefaixa.h"
#include "ui_escolhefaixa.h"

EscolheFaixa::EscolheFaixa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EscolheFaixa)
{
    ui->setupUi(this);
    this->setWindowTitle("Faixa");
}

EscolheFaixa::~EscolheFaixa()
{
    delete ui;
}

void EscolheFaixa::on_pushButton_clicked()
{

}

void EscolheFaixa::on_VACAuto_clicked()
{
   //CONF:VOLT:AC
}

void EscolheFaixa::on_VDCAuto_clicked()
{
    //CONF:VOLT:DC
}

void EscolheFaixa::on_VAC600_clicked()
{
    //CONF:VOLT:AC 600
}

void EscolheFaixa::on_VDC600_clicked()
{
    //CONF:VOLT:DC 600
}

void EscolheFaixa::on_AACAuto_clicked()
{
    //CONF:CURR:AC
}

void EscolheFaixa::on_ADCAuto_clicked()
{
    //CONF:CURR:DC
}

void EscolheFaixa::on_AAC60_clicked()
{
    //CONF:CURR:AC 60u
}

void EscolheFaixa::on_ADC60_clicked()
{
    //CONF:CURR:DC 60u
}

void EscolheFaixa::on_Freq_clicked()
{
    //CONF:FREQ
}

void EscolheFaixa::on_Cont_clicked()
{
    //CONF:CONT
}

void EscolheFaixa::on_ResAuto_clicked()
{
    //CONF:RES
}

void EscolheFaixa::on_Res6_clicked()
{
    //CONF:RES 6M
}

void EscolheFaixa::on_CapAuto_clicked()
{
    //CONF:CAP
}

void EscolheFaixa::on_Cap1000_clicked()
{
    //CONF:CAP 1000n
}
