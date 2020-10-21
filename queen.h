#ifndef QUEEN_H
#define QUEEN_H

#include"chesspiece.h"

//ферзь
class Queen: public ChessPiece
{
public:
    Queen(int column, int row, Side side);
    virtual bool Check(int newColumn,int newRow) override;
    virtual bool pawnAtack(int newColumn, int newRow) override;
    virtual bool isPawn() override;
};

#endif // QUEEN_H
