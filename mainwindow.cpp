#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    game = new Game();
    this->buttons = new QPushButton*;
    buttons[0] = ui->p1;
    buttons[1] = ui->p2;
    buttons[2] = ui->p3;
    buttons[3] = ui->p4;
    buttons[4] = ui->p5;
    buttons[5] = ui->p6;
    buttons[6] = ui->p7;
    buttons[7] = ui->p8;
    buttons[8] = ui->p9;
}

MainWindow::~MainWindow()
{
    //delete[] buttons; wtf???
    delete ui;
    delete game;
}


void MainWindow::on_clear_clicked()
{
    game->newGame(buttons);
    ui->p1->setText("");
    ui->p2->setText("");
    ui->p3->setText("");
    ui->p4->setText("");
    ui->p5->setText("");
    ui->p6->setText("");
    ui->p7->setText("");
    ui->p8->setText("");
    ui->p9->setText("");
}


void MainWindow::on_p1_clicked()
{
    game->clickOnField(buttons, 0);
}

void MainWindow::on_p2_clicked()
{
    game->clickOnField(buttons, 1);
}

void MainWindow::on_p3_clicked()
{
    game->clickOnField(buttons, 2);
}

void MainWindow::on_p4_clicked()
{
    game->clickOnField(buttons, 3);
}
void MainWindow::on_p5_clicked()
{
    game->clickOnField(buttons, 4);
}
void MainWindow::on_p6_clicked()
{
    game->clickOnField(buttons, 5);
}
void MainWindow::on_p7_clicked()
{
    game->clickOnField(buttons, 6);
}
void MainWindow::on_p8_clicked()
{
    game->clickOnField(buttons, 7);
}
void MainWindow::on_p9_clicked()
{
    game->clickOnField(buttons, 8);
}
