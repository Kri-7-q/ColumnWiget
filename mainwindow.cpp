#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "columnviewmodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->columnView->setColumnWidths({ 100, 100, 100 });
    ui->columnView->setModel(new ColumnViewModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}
