#include "bishop.h"

Bishop::Bishop(int column, int row, Side side):ChessPiece(column,row,side)
{
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_bishop.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_bishop.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool Bishop::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if(abs(this->columnNumber-newColumn)==abs(this->rowNumber-newRow))
    {
        return true;
    }

    return false;
}

bool Bishop::pawnAtack(int newColumn, int newRow)
{
    return false;
}

bool Bishop::isPawn()
{
    return false;
}
