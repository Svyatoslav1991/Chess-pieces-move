#include "knight.h"

Knight::Knight(int column, int row, Side side):ChessPiece(column,row,side)
{   
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_knight.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_knight.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool Knight::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if((abs(this->columnNumber-newColumn)==1)&&(abs(this->rowNumber-newRow)==2))
    {
        return true;
    }

    if((abs(this->columnNumber-newColumn)==2)&&(abs(this->rowNumber-newRow)==1))
    {
        return true;
    }

    return false;
}

bool Knight::pawnAtack(int newColumn, int newRow)
{
    return false;
}

bool Knight::isPawn()
{
    return false;
}
