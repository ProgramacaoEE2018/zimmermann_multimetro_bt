#include "multiemetro.h"
#include "ui_multiemetro.h"

multiemetro::multiemetro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiemetro)
{
    ui->setupUi(this);
    this->setWindowTitle("Multimetro");
}

multiemetro::~multiemetro()
{
    delete ui;
}

void multiemetro::on_Voltar_clicked()
{
    delete ui;
}

void multiemetro::on_dial_rangeChanged(int min, int max)
{
    //Para cada intervalo, teremos uma função correspondente, que dependerá se os botoes AC/DC ou m/u estejam ativados
    //CONF

}




void multiemetro::on_dial_sliderMoved(int value)
{
    if (0<value || value<12)
    {
        //float temp = FETC?
    }

    else if (12<value || value<23)
    {
        //float tensao = CONF:VOLT:AC
        int tensao = 10;
        ui->lcdNumber->display(tensao);
    }

    else if (23<value || value<36)
    {
        //float corrente = CONF:CURR:AC
        int corrente= 50;
        ui->lcdNumber->display(corrente);
    }

    else if (36<value || value<54)
    {
        //float freq = CONF:FREQ
        int freq = 100;
        ui->lcdNumber->display(freq);
    }

    else if (54<value || value<68)
    {
        //CONF:DIOD
    }

    else if (68<value || value<80)
    {
        //CONF:CONT
    }

    else if (80<value<94)
    {
        //float tensao = CONF:RES
        int resist = 11;
        ui->lcdNumber->display(resist);
    }

    else if (value>94)
    {
        //float capac = CONF:CAP
        float capac = 15;
        ui->lcdNumber->display(capac);

    }

}
