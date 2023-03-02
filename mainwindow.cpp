#include "mainwindow.h"
#include "converterbase.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    QPixmap Fla("C:/Users/pedro/Documents/Qt/MudancaDeBase-main/hulk_palmeiras");
            Fla= Fla.scaled(this->size());
            QPalette palette;
            palette.setBrush(QPalette::Window, Fla);
            this->setPalette(palette);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonExecutar_clicked()
{
    QString teste = ui->lineEditNumero->text();
    int numero;
    numero = teste.toInt();
    int base = 0;
    if(ui->comboBoxBases->currentIndex() == 0) base = 2;
    if(ui->comboBoxBases->currentIndex() == 1) base = 8;
    if(ui->comboBoxBases->currentIndex() == 2) base = 16;
    ped::ConverterBase a(numero, base);
    ui->lineEditResultado->setText(a.Conversores());

}

