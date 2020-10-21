#include "rook.h"

Rook::Rook(int column, int row, Side side):ChessPiece(column,row,side)
{
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_rook.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_rook.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool Rook::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if((newColumn==this->columnNumber)||(newRow==this->rowNumber))
    {
        return true;
    }
    return false;
}

bool Rook::pawnAtack(int newColumn, int newRow)
{
    return false;
}

bool Rook::isPawn()
{
    return false;
}
