#ifndef ROOK_H
#define ROOK_H

#include"chesspiece.h"

//Ладья
class Rook: public ChessPiece
{
public:
    Rook(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // ROOK_H
