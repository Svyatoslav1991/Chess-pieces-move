#include "pawn.h"

pawn::pawn(int column, int row, Side side):ChessPiece(column,row,side)
{
    QPixmap pix;
    if(side==Side::white)
    {
        pix.load(":/ChessFigures/ChessFigures/white_pawn.png");
    }
    else
    {
        pix.load(":/ChessFigures/ChessFigures/black_pawn.png");
    }
    pix=pix.scaled(CELLLENGTH,CELLLENGTH,Qt::KeepAspectRatio);
    this->setPixmap(pix);
}

bool pawn::Check(int newColumn, int newRow)
{
    if(newColumn<1||newColumn>8||newRow<1||newRow>8)
    {
        return false;
    }

    if(newColumn==this->columnNumber)
    {
        if(this->side==Side::white)
        {
            if(newRow-this->rowNumber==1)
            {
                return true;
            }else
                if((newRow-this->rowNumber==2)&&(newRow==4))
                {
                    return true;
                }
                else return false;

        }
        else
        {
            if(this->rowNumber-newRow==1)
            {
                return true;
            }else
                if((this->rowNumber-newRow==2)&&(newRow==5))
                {
                    return true;
                }
                else return false;
        }
    }
    else return false;
}

bool pawn::pawnAtack(int newColumn, int newRow)
{
    if(this->side==Side::white)
    {
        if(abs(newColumn-this->columnNumber)==1&&newRow-this->rowNumber==1)
        {
            return true;
        }
    }
    else
    {
        if(abs(newColumn-this->columnNumber)==1&&this->rowNumber-newRow==1)
        {
            return true;
        }
    }

    return false;
}

bool pawn::isPawn()
{
    return true;
}
