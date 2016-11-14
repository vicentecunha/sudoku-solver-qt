#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sudokufield.h"
#include <QMainWindow>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<QList<SudokuField*>> lineMap;
    QList<QList<SudokuField*>> columnMap;
    QList<QList<SudokuField*>> squareMap;
    bool sudokuIsValid();
    bool listHasRepeatedItems(const QList<QList<SudokuField*>>&);
    QList<SudokuField*> getTargets();

private slots:
    void clear();
    void solve();
};

#endif // MAINWINDOW_H
