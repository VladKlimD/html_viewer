#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->toPlainText();

    connect(ui->plainTextEdit, SIGNAL(textChanged()), this, SLOT(set_Html_From_Text_Edit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_Html_From_Text_Edit()
{
    ui->web_Engine_View->setHtml(ui->plainTextEdit->toPlainText());
}

