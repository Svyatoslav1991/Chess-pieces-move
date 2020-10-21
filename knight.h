#ifndef KNIGHT_H
#define KNIGHT_H

#include"chesspiece.h"

//конь
class Knight:public ChessPiece
{
public:
    Knight(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // KNIGHT_H
