#include "queen.h"

Queen::Queen(int column, int row, Side side):ChessPiece(column,row,side)
{
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_queen.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_queen.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool Queen::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if((newColumn==this->columnNumber)||(newRow==this->rowNumber))
    {
        return true;
    }

    if(abs(this->columnNumber-newColumn)==abs(this->rowNumber-newRow))
    {
        return true;
    }

    return false;
}

bool Queen::pawnAtack(int newColumn, int newRow)
{
    return false;
}

bool Queen::isPawn()
{
    return false;
}
