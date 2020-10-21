#ifndef KING_H
#define KING_H

#include"chesspiece.h"

//король
class King: public ChessPiece
{
public:
    King(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // KING_H
