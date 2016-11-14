#ifndef SUDOKUFIELD_H
#define SUDOKUFIELD_H

#include <QPushButton>

class SudokuField : public QPushButton
{
    Q_OBJECT

private:
    int value = 0;

public:
    SudokuField(QWidget * parent = 0);
    int getValue() {return value;}
    void setValue(int);

public slots:
    void nextValue();
};

#endif // SUDOKUFIELD_H
