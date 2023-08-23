#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    h = 0.1;
    xBegin = 3;
    xEnd = 3 + h;

    ui->widget->xAxis->setRange(-4, 4);
    ui->widget->yAxis->setRange(0, 9);


}

MainWindow::~MainWindow()
{
    delete ui;
}
