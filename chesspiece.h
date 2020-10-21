#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include<QGraphicsPixmapItem>
#include"constants.h"

//чисто виртуальный класс шахматной фигуры
class ChessPiece : public QGraphicsPixmapItem
{
public:
    ChessPiece(int column,int row,Side side);
    void SetPosXandY(int column, int row);   //Установить фигуру в нужную клетку;
    int GetColumnNumber() const;             //Получить номер горизонтали фигуры
    int GetRowNumber() const;                //Получить номер вертикали фигуры
    Side GetSide() const;                    //Узнать команду фигуры

    virtual bool Check(int newColumn,int newRow)=0;//Проверка ходов
    virtual bool pawnAtack(int newColumn,int newRow)=0;//атака пешки
    virtual bool isPawn()=0;//является ли фигура пешкой?

protected:
    int columnNumber; //Номер Вертикали шахматной клетки, где находится фигура
    int rowNumber;    //Номер горизонтали шахматной клетки, где находится фигура
    Side side;        //Команда фигуры (black or white)

    // QGraphicsItem interface


    // QGraphicsItem interface
//protected:
//    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
//    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // CHESSPIECE_H
