#ifndef GAME_H
#define GAME_H

#include<QGraphicsView>
#include"constants.h"
#include"chessboard.h"
#include"bishop.h"
#include"rook.h"
#include"king.h"
#include"knight.h"
#include"pawn.h"
#include"queen.h"


class Game: public QGraphicsView
{
public:
    Game(QWidget *parent = nullptr);
private:
    //ChessBoard board;
};

#endif // GAME_H
