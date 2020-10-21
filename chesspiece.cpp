#include "chesspiece.h"
#include<QCursor>

ChessPiece::ChessPiece(int column,int row,Side s):columnNumber(column),rowNumber(row),side(s)
{
    this->setPos((column-1)*CELLLENGTH,(ROWS-row)*CELLLENGTH);
}

//Установить фигуру в нужную клетку;
void ChessPiece::SetPosXandY(int column, int row)
{
        this->setPos((column-1)*CELLLENGTH,(8-row)*CELLLENGTH);
        columnNumber=column;
        rowNumber=row;
}

//Получить номер вертикали фигуры
int ChessPiece::GetColumnNumber()  const
{
    return columnNumber;
}

//Получить номер горизонтали фигуры
int ChessPiece::GetRowNumber()  const
{
    return rowNumber;
}

//Узнать команду фигуры(Black или White)
Side ChessPiece::GetSide()   const
{
    return side;
}


//void ChessPiece::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
//{
//    QPointF point = this->pos();
//    int x=(point.rx()+CELLLENGTH/2)/CELLLENGTH+1;
//    int y = (CELLLENGTH*ROWS-point.ry()+CELLLENGTH/2)/CELLLENGTH;

//    if(this->Check(x,y))
//    {
//        this->SetPosXandY(x,y);
//    }
//    else
//    {
//        this->SetPosXandY(columnNumber,rowNumber);
//    }
//}


//void ChessPiece::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
//{
//    this->setPos(this->mapFromScene(QCursor::pos()*2));
//}
