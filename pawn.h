#ifndef PAWN_H
#define PAWN_H

#include"chesspiece.h"

//пешка
class pawn:public ChessPiece
{
public:
    pawn(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // PAWN_H
