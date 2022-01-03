#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QTableWidget>
#include <QTableWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InstanciateGrid(50, 50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InstanciateGrid(int colNumber, int rowNumber)
{
    QTableWidget *table = new QTableWidget(this);
    table->setRowCount(10);
    table->setColumnCount(10);

    this->setCentralWidget(table);
}

struct MainWindow::SheetData
{

};
