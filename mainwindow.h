#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<QMediaPlayer>
#include"chessboard.h"
#include"constants.h"
#include"transformationpawn.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ChessBoard* board;                  //сцена шахматной доски
    ChosenFigure Figure;                //выбранная фигура
    int Horizontal;                     //горизонталь
    int Vertical;                       //вертикаль
    Side side;                          //сторона (черные или белые)
    bool move;                          //движение фигуры
    QTimer *timer;                      //таймер
    TransformationPawn *transformPawn;  //окно преобразования пешки
    QMediaPlayer* pPlayer;              //звук неправильного хода
    bool isSound;                       //включить или выключить звук
public slots:
    void ChangeFigure(int i);       //слот изменения фигуры
    void ChangeSide(int i);         //слот изменения стороны(цвета) фигуры
    void ChangeVertical(int i);     //слот изменения вертикали
    void ChangeHorizontal(int i);   //слот изменения горизонтали
    void ChangeMove(bool move);     //слот изменения возможности передвигать фигуру
    void ShowMove();                //слот, показывающий возможные ходы
    void ChangeCursor(bool hand);   //слот изменения курсора
    void MovingFigures();           //слот, передвигающий фигуру рандомно
    void About();                   //слот вывода информационного сообщения об игре
    void ChangeVert(int i);         //слот изменения вертикали при передвижении фигуры мышкой на доске
    void ChangeHoriz(int i);        //слот изменения горизонтали при передвижении фигуры мышкой на доске
    void StopTimer();               //слот остановки таймера
    void ChooseFigure();            //слот вызова нового окна с выбором фигуры вместо пешки
    void PlayMedia();               //слот проигрывания мелодии при неправильном ходе
    void OnSound();                 //слот включения звуковых эффектов
    void OffSound();                //слот выключения звуковых эффектов

    // QWidget interface
protected:
    virtual void keyPressEvent(QKeyEvent *event);//выключить таймер кнопкой Esc
};
#endif // MAINWINDOW_H
