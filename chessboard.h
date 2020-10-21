#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGraphicsScene>

#include"constants.h"
#include"chesscell.h"
#include"chesspiece.h"
#include"bishop.h"
#include"rook.h"
#include"king.h"
#include"pawn.h"
#include"queen.h"
#include"knight.h"

//Сцена шахматной доски
class ChessBoard:public QGraphicsScene
{
    Q_OBJECT
public:
    explicit ChessBoard(QObject *parent = nullptr);
    void ChangeFigure(ChosenFigure figure, int column, int row, Side side);//Поменять фигуру или позицию на шахматной доске
    void MovableFigure(bool move);//Возможность передвигать фигуру
    void CheckChessBoard(); //Проверить и сделать доску черно-белой
    void MakeYellowCell();//сделать клетку под фигурой желтой

private:
    ChessCell* arrChessCell[ROWS][COLUMNS];//шахматное поле
    ChessPiece* Figure;//шахматная фигура
    ChessPiece* moveFigure;//двигающаяся фигура
    bool isFigureMove;//может ли фигура двигаться?

public slots:
    void ShowPosibleMove();//Показать возможные ходы
    void MovingFigures();//Двигающиеся рандомно фигуры

protected:
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);//обработка удержания левой кнопки мыши
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);//обработка сбрасывания левой кнопки мыши
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);//обработка нажатия левой кнопки мыши
signals:
    void CloseCursor(bool hand);//изменить вид курсора
    void ChangeHorizontal(int i);//изменить горизонталь
    void ChangeVertical(int i);//изменить вертикаль
    void StopTimer();//остановить таймер
    void ChangePawn();//заменить пешку на другую фигуру
    void WrongMove();//вызвать звуковой сигнал неправильного хода

};

#endif // CHESSBOARD_H
