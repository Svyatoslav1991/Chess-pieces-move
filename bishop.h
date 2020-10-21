#ifndef BISHOP_H
#define BISHOP_H

#include"chesspiece.h"

//слон
class Bishop:public ChessPiece
{
public:
    Bishop(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // BISHOP_H
