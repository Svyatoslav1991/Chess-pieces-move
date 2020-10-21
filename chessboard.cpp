#include "chessboard.h"
#include<QDebug>
#include<QGraphicsSceneMouseEvent>
#include<QGraphicsItem>
#include<QCursor>
#include<random>
//#include<QKeyEvent>

ChessBoard::ChessBoard(QObject *parent):QGraphicsScene(parent)
{
    this->setSceneRect(0,0,ROWS*CELLLENGTH,COLUMNS*CELLLENGTH);

    for(int i = 0; i<ROWS;i++)
    {
        for(int j = 0; j<COLUMNS;j++)
        {
            arrChessCell[i][j]=new ChessCell();
            arrChessCell[i][j]->SetRowNumber(i+1);
            arrChessCell[i][j]->SetColumnNumber(j+1);
            arrChessCell[i][j]->SetCellColor();
            (arrChessCell[i][j]->GetCellColor()==CellColor::light) ? arrChessCell[i][j]->SetCellBrush(LIGHTCELL) : arrChessCell[i][j]->SetCellBrush(DARKCELL);
            arrChessCell[i][j]->setRect(j*CELLLENGTH,(CELLLENGTH*(ROWS-1))-i*CELLLENGTH,CELLLENGTH,CELLLENGTH);
            this->addItem(arrChessCell[i][j]);
        }
    }

//    chessFigures.push_back(new King(1,1,Side::white));
//    this->addItem(chessFigures[0]);
    Figure = new King(1,1,Side::white);
    //Figure->setFlag(QGraphicsItem::ItemIsMovable,false);
    isFigureMove = false;
    this->addItem(Figure);
    moveFigure=nullptr;
}

//Поменять фигуру или позицию на шахматной доске
void ChessBoard::ChangeFigure(ChosenFigure figure, int column, int row, Side side)
{
    delete Figure;
    switch (figure) {
    case ChosenFigure::King:
        Figure = new King(column,row,side);
        break;
    case ChosenFigure::Rook:
        Figure = new Rook(column,row,side);
        break;
    case ChosenFigure::Bishop:
        Figure = new Bishop(column,row,side);
        break;
    case ChosenFigure::Queen:
        Figure = new Queen(column,row,side);
        break;
    case ChosenFigure::pawn:
        Figure = new pawn(column,row,side);
        break;
    case ChosenFigure::Knight:
        Figure = new Knight(column,row,side);
        break;
    default:
        break;
    }
    this->addItem(Figure);
}

//Возможность передвигать фигуру
void ChessBoard::MovableFigure(bool move)
{
    //Figure->setFlag(QGraphicsItem::ItemIsMovable,move);
    isFigureMove = move;
}

//Проверить и сделать доску черно-белой
void ChessBoard::CheckChessBoard()
{
    for(int i = 0; i<ROWS;i++)
    {
        for(int j = 0; j<COLUMNS;j++)
        {
            if(arrChessCell[i][j]->GetCellColor()==CellColor::light)
            {
                if(arrChessCell[i][j]->GetCellBrush()!=LIGHTCELL)
                {
                    arrChessCell[i][j]->SetCellBrush(LIGHTCELL);
                }
            }
            else
            {
                if(arrChessCell[i][j]->GetCellBrush()!=DARKCELL)
                {
                    arrChessCell[i][j]->SetCellBrush(DARKCELL);
                }
            }
        }
    }
}

//сделать клетку под фигурой желтой
void ChessBoard::MakeYellowCell()
{
    int row = this->Figure->GetRowNumber();
    int column = this->Figure->GetColumnNumber();

    if(arrChessCell[row-1][column-1]->GetCellColor()==CellColor::light)
    {
        arrChessCell[row-1][column-1]->SetCellBrush(Qt::yellow);
    }
    else
    {
        arrChessCell[row-1][column-1]->SetCellBrush(Qt::darkYellow);
    }
}

//Показать возможные ходы
void ChessBoard::ShowPosibleMove()
{
    int row = this->Figure->GetRowNumber();
    int column = this->Figure->GetColumnNumber();

    for(int i =0; i<ROWS; i++)
    {
        for(int j = 0; j<COLUMNS; j++)
        {
            if(Figure->Check(j+1,i+1)&&((row!=i+1)||(column!=j+1)))
            {
                if( arrChessCell[i][j]->GetCellColor()==CellColor::light)
                {
                    arrChessCell[i][j]->SetCellBrush(Qt::cyan);
                }
                else
                {
                    arrChessCell[i][j]->SetCellBrush(Qt::darkCyan);
                }
            }

            if(Figure->isPawn())//атака пешки
            {
                if(Figure->pawnAtack(j+1,i+1))
                {
                    if( arrChessCell[i][j]->GetCellColor()==CellColor::light)
                    {
                        arrChessCell[i][j]->SetCellBrush(Qt::red);
                    }
                    else
                    {
                        arrChessCell[i][j]->SetCellBrush(Qt::darkRed);
                    }
                }
            }
        }
    }
}

//двигающиеся рандомно фигуры
void ChessBoard::MovingFigures()
{
    this->CheckChessBoard();
    int x = rand()%8+1;
    int y = rand()%8+1;

    while((!Figure->Check(x,y))||((x==Figure->GetColumnNumber())&&(y==Figure->GetRowNumber())))
    {
        x = rand()%COLUMNS+1;
        y = rand()%ROWS+1;
    }

    this->MakeYellowCell();
    Figure->SetPosXandY(x,y);
    emit ChangeVertical(Figure->GetColumnNumber());
    emit ChangeHorizontal(Figure->GetRowNumber());
    if(Figure->isPawn()&&(Figure->GetRowNumber()==1||Figure->GetRowNumber()==ROWS))
    {
        emit ChangePawn();
    }
}
//////////////////////////////////////////

//обработка нажатия левой кнопки мыши
void ChessBoard::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {

        if(isFigureMove==true)
        {
            QPointF point = event->scenePos();
            if((point.x()>Figure->x())&&(point.x()<(Figure->x()+CELLLENGTH))&&(point.y()>Figure->y())&&(point.y()<(Figure->y()+CELLLENGTH)))
            {
                emit StopTimer();
                this->CheckChessBoard();
                moveFigure=Figure;
                emit CloseCursor(true);
            }
        }
    }
}

//обработка удержания левой кнопки мыши
void ChessBoard::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton)
    {
        if(moveFigure!=nullptr)
        {
            this->CheckChessBoard();
            QPointF point = event->scenePos();

            moveFigure->setPos(point.x()-CELLLENGTH*0.5,point.y()-CELLLENGTH*0.5);

            int x = point.x()/CELLLENGTH;
            int y = (CELLLENGTH*ROWS-point.y())/CELLLENGTH;
            if((x>=0)&&(x<COLUMNS)&&(y>=0)&&(y<ROWS)&&(point.x()>0)&&(point.y()<CELLLENGTH*ROWS))
            {
                if(arrChessCell[y][x]->GetCellColor()==CellColor::light)
                {
                    arrChessCell[y][x]->SetCellBrush(Qt::green);
                }
                else
                {
                    arrChessCell[y][x]->SetCellBrush(Qt::darkGreen);
                }
            }
            else
            {
                if(arrChessCell[Figure->GetRowNumber()-1][Figure->GetColumnNumber()-1]->GetCellColor()==CellColor::light)
                {
                    arrChessCell[Figure->GetRowNumber()-1][Figure->GetColumnNumber()-1]->SetCellBrush(Qt::green);
                }
                else
                {
                    arrChessCell[Figure->GetRowNumber()-1][Figure->GetColumnNumber()-1]->SetCellBrush(Qt::darkGreen);
                }

            }


        }
    }
}

//обработка сбрасывания левой кнопки мыши
void ChessBoard::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        if(moveFigure!=nullptr)
        {
            this->CheckChessBoard();
            QPointF point = event->scenePos();
            int x = point.x()/CELLLENGTH+1;
            int y = (CELLLENGTH*ROWS-point.y())/CELLLENGTH+1;

            if(moveFigure->Check(x,y))
            {

                if(y!=moveFigure->GetRowNumber()||x!=moveFigure->GetColumnNumber())
                {
                    this->MakeYellowCell();
                }


                moveFigure->SetPosXandY(x,y);

                emit ChangeVertical(Figure->GetColumnNumber());
                emit ChangeHorizontal(Figure->GetRowNumber());
                if(Figure->isPawn()&&(Figure->GetRowNumber()==1||Figure->GetRowNumber()==ROWS))
                {
                    emit ChangePawn();
                }
            }
            else
            {
                moveFigure->SetPosXandY(moveFigure->GetColumnNumber(),moveFigure->GetRowNumber());

                if(x!=moveFigure->GetColumnNumber()||y!=moveFigure->GetRowNumber())
                {
                    emit WrongMove();
                }
            }

            moveFigure=nullptr;
            emit CloseCursor(false);
        }
    }
}

