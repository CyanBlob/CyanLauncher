#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <iostream>
#include <unistd.h>

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    std::cout<<"HELLO WORLD"<<std::endl;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething() {
    pid_t pid = fork();
    if (pid == 0)
    {
        const char *numRooms = "100";
        if (ui->numRoomsField->text().toStdString().length() > 0) {
            numRooms = ui->numRoomsField->text().toStdString().c_str();
        }

        chdir("/home/andrew/Development/CyanEngine");
        execl("/home/andrew/Development/CyanEngine/CyanEngine.out", "/home/andrew/Development/CyanEngine/CyanEngine.out", "-n", numRooms, "", (char*) 0);
        exit(0);
    }
    else if (pid > 0) {
    }
}
