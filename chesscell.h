#ifndef CHESSCELL_H
#define CHESSCELL_H

#include<QGraphicsRectItem>

#include"constants.h"

//Шахматная клетка
class ChessCell: public QGraphicsRectItem
{
public:
    ChessCell();
    void SetRowNumber(int row);         //Установить горизонталь шахматной клетки
    void SetColumnNumber(int column);   //Установить вертикаль шахматной клетки
    int GetRowNumber() const;           //Получить горизонталь шахматной клетки
    int GetColumnNumber() const;        //Получить вертикаль шахматной клетки
    void SetCellBrush(QBrush brush);    //Установить цвет клетки
    QBrush GetCellBrush() const;        //Узнать цвет клетки
    void SetCellColor();                //Установить темную или светлую клетку
    CellColor GetCellColor() const;     //Узнать, темная или светлая клетка
private:
    int rowNumber;      //Номер горизонтали шахматной клетки
    int columnNumber;   //Номер Вертикали шахматной клетки
    QBrush CellBrush;   //Цвет шахматной клетки
    CellColor cellColor;//Темная или светлая клетка
};

#endif // CHESSCELL_H
