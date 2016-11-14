#include "sudokufield.h"

SudokuField::SudokuField(QWidget * parent) : QPushButton(parent)
{

}

void SudokuField::nextValue()
{
    setValue(++value);
}

void SudokuField::setValue(int i)
{
    value = i;
    if (value >= 10) value = 0;
    if (value != 0) this->setText(QString::number(value));
    else this->setText(" ");
}
