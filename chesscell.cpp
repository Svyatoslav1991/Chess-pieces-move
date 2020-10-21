#include "chesscell.h"

//конструктор шахматной клетки
ChessCell::ChessCell()
{
    rowNumber = columnNumber=0;
}

//установить номер горизонтали шахматной клетки
void ChessCell::SetRowNumber(int row)
{
        this->rowNumber = row;
}

//установить номер вертикали шахматной клетки
void ChessCell::SetColumnNumber(int column)
{
        this->columnNumber = column;
}

//получить номер горизонтали шахматной клетки
int ChessCell::GetRowNumber() const
{
    return rowNumber;
}

//получить номер вертикали шахматной клетки
int ChessCell::GetColumnNumber() const
{
    return columnNumber;
}

//Установить цвет клетки
void ChessCell::SetCellBrush(QBrush brush)
{
        this->setBrush(brush);
        CellBrush = brush;
}

//Узнать цвет клетки
QBrush ChessCell::GetCellBrush() const
{
    return CellBrush;
}

//Установить темный или светлый цвет клетки
void ChessCell::SetCellColor()
{
        if((rowNumber+columnNumber)%2==1){  this->cellColor = CellColor::light;}
        else{this->cellColor = CellColor::dark;}
}

//Узнать, темна или светлая клетка
CellColor ChessCell::GetCellColor() const
{
    return cellColor;
}
