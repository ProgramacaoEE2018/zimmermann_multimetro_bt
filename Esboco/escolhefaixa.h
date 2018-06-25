#ifndef ESCOLHEFAIXA_H
#define ESCOLHEFAIXA_H

#include <QWidget>

namespace Ui {
class EscolheFaixa;
}

class EscolheFaixa : public QWidget
{
    Q_OBJECT

public:
    explicit EscolheFaixa(QWidget *parent = 0);
    ~EscolheFaixa();

private slots:
    void on_pushButton_clicked();

    void on_VACAuto_clicked();

    void on_VDCAuto_clicked();

    void on_VAC600_clicked();

    void on_VDC600_clicked();

    void on_AACAuto_clicked();

    void on_ADCAuto_clicked();

    void on_AAC60_clicked();

    void on_ADC60_clicked();

    void on_Freq_clicked();

    void on_Cont_clicked();

    void on_ResAuto_clicked();

    void on_Res6_clicked();

    void on_CapAuto_clicked();

    void on_Cap1000_clicked();

private:
    Ui::EscolheFaixa *ui;
};

#endif // ESCOLHEFAIXA_H
