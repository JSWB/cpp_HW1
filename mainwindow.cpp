#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

