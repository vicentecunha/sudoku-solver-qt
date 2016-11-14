#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowMinimizeButtonHint|Qt::WindowCloseButtonHint);

    QList<SudokuField*> list;
    list.append(ui->a11);
    list.append(ui->a12);
    list.append(ui->a13);
    list.append(ui->a14);
    list.append(ui->a15);
    list.append(ui->a16);
    list.append(ui->a17);
    list.append(ui->a18);
    list.append(ui->a19);
    lineMap.append(list);
    list.clear();
    list.append(ui->a21);
    list.append(ui->a22);
    list.append(ui->a23);
    list.append(ui->a24);
    list.append(ui->a25);
    list.append(ui->a26);
    list.append(ui->a27);
    list.append(ui->a28);
    list.append(ui->a29);
    lineMap.append(list);
    list.clear();
    list.append(ui->a31);
    list.append(ui->a32);
    list.append(ui->a33);
    list.append(ui->a34);
    list.append(ui->a35);
    list.append(ui->a36);
    list.append(ui->a37);
    list.append(ui->a38);
    list.append(ui->a39);
    lineMap.append(list);
    list.clear();
    list.append(ui->a41);
    list.append(ui->a42);
    list.append(ui->a43);
    list.append(ui->a44);
    list.append(ui->a45);
    list.append(ui->a46);
    list.append(ui->a47);
    list.append(ui->a48);
    list.append(ui->a49);
    lineMap.append(list);
    list.clear();
    list.append(ui->a51);
    list.append(ui->a52);
    list.append(ui->a53);
    list.append(ui->a54);
    list.append(ui->a55);
    list.append(ui->a56);
    list.append(ui->a57);
    list.append(ui->a58);
    list.append(ui->a59);
    lineMap.append(list);
    list.clear();
    list.append(ui->a61);
    list.append(ui->a62);
    list.append(ui->a63);
    list.append(ui->a64);
    list.append(ui->a65);
    list.append(ui->a66);
    list.append(ui->a67);
    list.append(ui->a68);
    list.append(ui->a69);
    lineMap.append(list);
    list.clear();
    list.append(ui->a71);
    list.append(ui->a72);
    list.append(ui->a73);
    list.append(ui->a74);
    list.append(ui->a75);
    list.append(ui->a76);
    list.append(ui->a77);
    list.append(ui->a78);
    list.append(ui->a79);
    lineMap.append(list);
    list.clear();
    list.append(ui->a81);
    list.append(ui->a82);
    list.append(ui->a83);
    list.append(ui->a84);
    list.append(ui->a85);
    list.append(ui->a86);
    list.append(ui->a87);
    list.append(ui->a88);
    list.append(ui->a89);
    lineMap.append(list);
    list.clear();
    list.append(ui->a91);
    list.append(ui->a92);
    list.append(ui->a93);
    list.append(ui->a94);
    list.append(ui->a95);
    list.append(ui->a96);
    list.append(ui->a97);
    list.append(ui->a98);
    list.append(ui->a99);
    lineMap.append(list);

    list.clear();
    list.append(ui->a11);
    list.append(ui->a21);
    list.append(ui->a31);
    list.append(ui->a41);
    list.append(ui->a51);
    list.append(ui->a61);
    list.append(ui->a71);
    list.append(ui->a81);
    list.append(ui->a91);
    columnMap.append(list);
    list.clear();
    list.append(ui->a12);
    list.append(ui->a22);
    list.append(ui->a32);
    list.append(ui->a42);
    list.append(ui->a52);
    list.append(ui->a62);
    list.append(ui->a72);
    list.append(ui->a82);
    list.append(ui->a92);
    columnMap.append(list);
    list.clear();
    list.append(ui->a13);
    list.append(ui->a23);
    list.append(ui->a33);
    list.append(ui->a43);
    list.append(ui->a53);
    list.append(ui->a63);
    list.append(ui->a73);
    list.append(ui->a83);
    list.append(ui->a93);
    columnMap.append(list);
    list.clear();
    list.append(ui->a14);
    list.append(ui->a24);
    list.append(ui->a34);
    list.append(ui->a44);
    list.append(ui->a54);
    list.append(ui->a64);
    list.append(ui->a74);
    list.append(ui->a84);
    list.append(ui->a94);
    columnMap.append(list);
    list.clear();
    list.append(ui->a15);
    list.append(ui->a25);
    list.append(ui->a35);
    list.append(ui->a45);
    list.append(ui->a55);
    list.append(ui->a65);
    list.append(ui->a75);
    list.append(ui->a85);
    list.append(ui->a95);
    columnMap.append(list);
    list.clear();
    list.append(ui->a16);
    list.append(ui->a26);
    list.append(ui->a36);
    list.append(ui->a46);
    list.append(ui->a56);
    list.append(ui->a66);
    list.append(ui->a76);
    list.append(ui->a86);
    list.append(ui->a96);
    columnMap.append(list);
    list.clear();
    list.append(ui->a17);
    list.append(ui->a27);
    list.append(ui->a37);
    list.append(ui->a47);
    list.append(ui->a57);
    list.append(ui->a67);
    list.append(ui->a77);
    list.append(ui->a87);
    list.append(ui->a97);
    columnMap.append(list);
    list.clear();
    list.append(ui->a18);
    list.append(ui->a28);
    list.append(ui->a38);
    list.append(ui->a48);
    list.append(ui->a58);
    list.append(ui->a68);
    list.append(ui->a78);
    list.append(ui->a88);
    list.append(ui->a98);
    columnMap.append(list);
    list.clear();
    list.append(ui->a19);
    list.append(ui->a29);
    list.append(ui->a39);
    list.append(ui->a49);
    list.append(ui->a59);
    list.append(ui->a69);
    list.append(ui->a79);
    list.append(ui->a89);
    list.append(ui->a99);
    columnMap.append(list);

    list.clear();
    list.append(ui->a11);
    list.append(ui->a12);
    list.append(ui->a13);
    list.append(ui->a21);
    list.append(ui->a22);
    list.append(ui->a23);
    list.append(ui->a31);
    list.append(ui->a32);
    list.append(ui->a33);
    squareMap.append(list);
    list.clear();
    list.append(ui->a14);
    list.append(ui->a15);
    list.append(ui->a16);
    list.append(ui->a24);
    list.append(ui->a25);
    list.append(ui->a26);
    list.append(ui->a34);
    list.append(ui->a35);
    list.append(ui->a36);
    squareMap.append(list);
    list.clear();
    list.append(ui->a17);
    list.append(ui->a18);
    list.append(ui->a19);
    list.append(ui->a27);
    list.append(ui->a28);
    list.append(ui->a29);
    list.append(ui->a37);
    list.append(ui->a38);
    list.append(ui->a39);
    squareMap.append(list);
    list.clear();
    list.append(ui->a41);
    list.append(ui->a42);
    list.append(ui->a43);
    list.append(ui->a51);
    list.append(ui->a52);
    list.append(ui->a53);
    list.append(ui->a61);
    list.append(ui->a62);
    list.append(ui->a63);
    squareMap.append(list);
    list.clear();
    list.append(ui->a44);
    list.append(ui->a45);
    list.append(ui->a46);
    list.append(ui->a54);
    list.append(ui->a55);
    list.append(ui->a56);
    list.append(ui->a64);
    list.append(ui->a65);
    list.append(ui->a66);
    squareMap.append(list);
    list.clear();
    list.append(ui->a47);
    list.append(ui->a48);
    list.append(ui->a49);
    list.append(ui->a57);
    list.append(ui->a58);
    list.append(ui->a59);
    list.append(ui->a67);
    list.append(ui->a68);
    list.append(ui->a69);
    squareMap.append(list);
    list.clear();
    list.append(ui->a71);
    list.append(ui->a72);
    list.append(ui->a73);
    list.append(ui->a81);
    list.append(ui->a82);
    list.append(ui->a83);
    list.append(ui->a91);
    list.append(ui->a92);
    list.append(ui->a93);
    squareMap.append(list);
    list.clear();
    list.append(ui->a74);
    list.append(ui->a75);
    list.append(ui->a76);
    list.append(ui->a84);
    list.append(ui->a85);
    list.append(ui->a86);
    list.append(ui->a94);
    list.append(ui->a95);
    list.append(ui->a96);
    squareMap.append(list);
    list.clear();
    list.append(ui->a77);
    list.append(ui->a78);
    list.append(ui->a79);
    list.append(ui->a87);
    list.append(ui->a88);
    list.append(ui->a89);
    list.append(ui->a97);
    list.append(ui->a98);
    list.append(ui->a99);
    squareMap.append(list);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            connect(lineMap[i][j], SIGNAL(clicked(bool)), lineMap[i][j], SLOT(nextValue()));
        }
    }
    connect(ui->clear, SIGNAL(clicked(bool)), this, SLOT(clear()));
    connect(ui->solve, SIGNAL(clicked(bool)), this, SLOT(solve()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            lineMap[i][j]->setValue(0);
        }
    }
}

bool MainWindow::listHasRepeatedItems(const QList<QList<SudokuField*>>& list)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (list[i][j]->getValue() == 0) continue;
            for (int k = j+1; k < 9; k++)
            {
                if (list[i][j]->getValue() == list[i][k]->getValue()) return true;
            }
        }
    }
    return false;
}

bool MainWindow::sudokuIsValid()
{
    if (listHasRepeatedItems(lineMap)) return false;
    if (listHasRepeatedItems(columnMap)) return false;
    if (listHasRepeatedItems(squareMap)) return false;
    return true;
}

QList<SudokuField*> MainWindow::getTargets()
{
    QList<SudokuField*> list;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (lineMap[i][j]->getValue() == 0) list.append(lineMap[i][j]);
        }
    }
    return list;
}

void MainWindow::solve()
{
    if (!sudokuIsValid())
    {
        ui->statusBar->showMessage("Sudoku problem is invalid!");
        return;
    }

    QList<SudokuField*> targets = getTargets();
    int index = 0;
    while (index < targets.length())
    {
        targets[index]->nextValue();
        if (targets[index]->getValue() == 0)
        {
            index--;
            continue;
        }
        if (sudokuIsValid())
        {
            index++;
            continue;
        }
    }
    ui->statusBar->showMessage("Sudoku problem solved!");
}
