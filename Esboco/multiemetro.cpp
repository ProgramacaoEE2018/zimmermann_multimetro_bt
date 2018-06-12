#include "multiemetro.h"
#include "ui_multiemetro.h"

multiemetro::multiemetro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiemetro)
{
    ui->setupUi(this);
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
    //CONF?
}
