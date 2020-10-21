#include "king.h"

King::King(int column, int row, Side side):ChessPiece(column,row,side)
{
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_king.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_king.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool King::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if(((abs(this->columnNumber-newColumn)==1)||(abs(this->columnNumber-newColumn)==0))&&((abs(this->rowNumber-newRow)==1)||(abs(this->rowNumber-newRow)==0)))
    {
        return true;
    }

    return false;
}

bool King::pawnAtack(int newColumn, int newRow)
{
    return false;
}

bool King::isPawn()
{
    return false;
}
