#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPushButton>
#include "pawn.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    display_square_size = 100; // size
    has_coords = false;
    main_x = main_y = 0;
    process = 0;
    // 0 = when it next clicks to choose a piece to move
    // 1 = when it needs to find a new location to move

    Pawn black_pawn0(50, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn1(150, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn2(250, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn3(350, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn4(450, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn5(550, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn6(650, 150, ":/MyFiles/black_pawn.png");
    Pawn black_pawn7(750, 150, ":/MyFiles/black_pawn.png");

    Pawn white_pawn0(50, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn1(150, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn2(250, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn3(350, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn4(450, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn5(550, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn6(650, 650, ":/MyFiles/white_pawn.png");
    Pawn white_pawn7(750, 650, ":/MyFiles/white_pawn.png");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent * e)
{
    QPainter painter(this);
    int change_x(0), change_y(0), color(0);
    for (int i = 0; i<8; ++i)
    {
        for (int j = 0; j<8; ++j)
        {
            if ((color%2==0 && j%2==0) || (color%2!=0 && j%2!=0))
            {
                painter.fillRect(change_x,change_y,display_square_size,display_square_size, Qt::darkGreen);
            }
            if ((color%2!=0 && j%2==0) || (color%2==0 && j%2!=0))
            {
                painter.fillRect(change_x,change_y,display_square_size,display_square_size, Qt::darkGray);
            }
            change_x += 100;
        }
        change_y+=100;
        change_x = 0;
        color++;
    }
    //painter.fillRect(px,height()-ph, pw, ph, Qt::red);
    update();
}

void MainWindow::on_pushButton_clicked() // start
{

    // black
    QIcon icon_black_pawn(":/MyFiles/black_pawn.png");

    ui->pushButton_10->setIcon(icon_black_pawn);
    ui->pushButton_11->setIcon(icon_black_pawn);
    ui->pushButton_12->setIcon(icon_black_pawn);
    ui->pushButton_13->setIcon(icon_black_pawn);
    ui->pushButton_14->setIcon(icon_black_pawn);
    ui->pushButton_15->setIcon(icon_black_pawn);
    ui->pushButton_16->setIcon(icon_black_pawn);
    ui->pushButton_17->setIcon(icon_black_pawn);

    // white
    QIcon icon_white_pawn(":/MyFiles/white_pawn.png");

    ui->pushButton_60->setIcon(icon_white_pawn);
    ui->pushButton_61->setIcon(icon_white_pawn);
    ui->pushButton_62->setIcon(icon_white_pawn);
    ui->pushButton_63->setIcon(icon_white_pawn);
    ui->pushButton_64->setIcon(icon_white_pawn);
    ui->pushButton_65->setIcon(icon_white_pawn);
    ui->pushButton_66->setIcon(icon_white_pawn);
    ui->pushButton_67->setIcon(icon_white_pawn);

}

// first (top) row of board
void MainWindow::on_pushButton_00_clicked()
{

}
void MainWindow::on_pushButton_01_clicked()
{

}
void MainWindow::on_pushButton_02_clicked()
{

}
void MainWindow::on_pushButton_03_clicked()
{

}
void MainWindow::on_pushButton_04_clicked()
{

}
void MainWindow::on_pushButton_05_clicked()
{

}
void MainWindow::on_pushButton_06_clicked()
{

}
void MainWindow::on_pushButton_07_clicked()
{

}

// second row of board
void MainWindow::on_pushButton_10_clicked()
{
//    bool is_occupied = true;
//    if (is_occupied = true)
//    {
//        if (process == 0)
//        {
//            process = 1;
//        }
//    }
//    else
//    {
//        if (proccess == 1)
//        {

//        }

//    }
}
void MainWindow::on_pushButton_11_clicked()
{

}
void MainWindow::on_pushButton_12_clicked()
{

}
void MainWindow::on_pushButton_13_clicked()
{

}
void MainWindow::on_pushButton_14_clicked()
{

}
void MainWindow::on_pushButton_15_clicked()
{

}
void MainWindow::on_pushButton_16_clicked()
{

}
void MainWindow::on_pushButton_17_clicked()
{

}

// third row of board
void MainWindow::on_pushButton_20_clicked()
{

}
void MainWindow::on_pushButton_21_clicked()
{

}
void MainWindow::on_pushButton_22_clicked()
{

}
void MainWindow::on_pushButton_23_clicked()
{

}
void MainWindow::on_pushButton_24_clicked()
{

}
void MainWindow::on_pushButton_25_clicked()
{

}
void MainWindow::on_pushButton_26_clicked()
{

}
void MainWindow::on_pushButton_27_clicked()
{

}

// fourth row of board
void MainWindow::on_pushButton_30_clicked()
{

}
void MainWindow::on_pushButton_31_clicked()
{

}
void MainWindow::on_pushButton_32_clicked()
{

}
void MainWindow::on_pushButton_33_clicked()
{

}
void MainWindow::on_pushButton_34_clicked()
{

}
void MainWindow::on_pushButton_35_clicked()
{

}
void MainWindow::on_pushButton_36_clicked()
{

}
void MainWindow::on_pushButton_37_clicked()
{

}

// fifth row of board
void MainWindow::on_pushButton_40_clicked()
{

}
void MainWindow::on_pushButton_41_clicked()
{

}
void MainWindow::on_pushButton_42_clicked()
{

}
void MainWindow::on_pushButton_43_clicked()
{

}
void MainWindow::on_pushButton_44_clicked()
{

}
void MainWindow::on_pushButton_45_clicked()
{

}
void MainWindow::on_pushButton_46_clicked()
{

}
void MainWindow::on_pushButton_47_clicked()
{

}

// sixth row of board
void MainWindow::on_pushButton_50_clicked()
{

}
void MainWindow::on_pushButton_51_clicked()
{

}
void MainWindow::on_pushButton_52_clicked()
{

}
void MainWindow::on_pushButton_53_clicked()
{

}
void MainWindow::on_pushButton_54_clicked()
{

}
void MainWindow::on_pushButton_55_clicked()
{

}
void MainWindow::on_pushButton_56_clicked()
{

}
void MainWindow::on_pushButton_57_clicked()
{

}

// seventh row of board
void MainWindow::on_pushButton_60_clicked()
{

}
void MainWindow::on_pushButton_61_clicked()
{

}
void MainWindow::on_pushButton_62_clicked()
{

}
void MainWindow::on_pushButton_63_clicked()
{

}
void MainWindow::on_pushButton_64_clicked()
{

}
void MainWindow::on_pushButton_65_clicked()
{

}
void MainWindow::on_pushButton_66_clicked()
{

}
void MainWindow::on_pushButton_67_clicked()
{

}

// eighth row of board
void MainWindow::on_pushButton_70_clicked()
{

}
void MainWindow::on_pushButton_71_clicked()
{

}
void MainWindow::on_pushButton_72_clicked()
{

}
void MainWindow::on_pushButton_73_clicked()
{

}
void MainWindow::on_pushButton_74_clicked()
{

}
void MainWindow::on_pushButton_75_clicked()
{

}
void MainWindow::on_pushButton_76_clicked()
{

}
void MainWindow::on_pushButton_77_clicked()
{

}
