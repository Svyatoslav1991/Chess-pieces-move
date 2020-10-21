#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QMessageBox>
#include"transformationpawn.h"
#include<QDebug>
#include<QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Qt::WindowFlags flags = Qt::Window;

    flags |=Qt::CustomizeWindowHint;
    flags |=Qt::WindowTitleHint;
    this->setWindowFlags(flags);
//    this->setMinimumSize(CELLLENGTH*ROWS+2.5*CELLLENGTH,CELLLENGTH*COLUMNS+CELLLENGTH);
//    this->resize(CELLLENGTH*ROWS+2.5*CELLLENGTH,CELLLENGTH*COLUMNS+CELLLENGTH);
    this->setFixedSize(CELLLENGTH*ROWS+2.5*CELLLENGTH,CELLLENGTH*COLUMNS+CELLLENGTH);
    this->setWindowState(Qt::WindowNoState);

    this->setWindowTitle(tr("CHESS"));
    board = new ChessBoard(this);

    //убираю скролы
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //устанавливаю сцену на GraphicsView
    ui->graphicsView->setFixedSize(ROWS*CELLLENGTH,COLUMNS*CELLLENGTH);
    ui->graphicsView->setScene(board);

    //Устанавливаю сглаживание
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    QCursor cursor = QCursor(Qt::OpenHandCursor);
    ui->graphicsView->setCursor(cursor);

    this->Figure = ChosenFigure::King;
    this->Horizontal=1;
    this->Vertical = 1;
    this->side=Side::white;
    this->move = false;
    this->timer = new QTimer(this);
    this->transformPawn=nullptr;
    this->pPlayer = new QMediaPlayer;
    pPlayer->setMedia(QUrl("qrc:/music/100-k-1-the-same-answer.mp3"));
    this->isSound=true;

    connect(board,SIGNAL(CloseCursor(bool)),this,SLOT(ChangeCursor(bool)));
    connect(timer,SIGNAL(timeout()),this->board,SLOT(MovingFigures()));
    connect(board,SIGNAL(ChangeHorizontal(int)),this,SLOT(ChangeHoriz(int)));
    connect(board,SIGNAL(ChangeVertical(int)),this,SLOT(ChangeVert(int)));
    connect(board,SIGNAL(StopTimer()),this,SLOT(StopTimer()));
    connect(board,SIGNAL(ChangePawn()),this,SLOT(ChooseFigure()));
    connect(board,SIGNAL(WrongMove()),this,SLOT(PlayMedia()));
//    connect(transformPawn,SIGNAL(ChangePawn(int )),this,SLOT(ChangeFigure(int)));

    this->ui->actionExit->setIcon(QIcon(":/icons/icons/cross.ico"));
    this->ui->actionAbout->setIcon(QIcon(":/icons/icons/question.ico"));
    this->ui->menuSound->setIcon(QIcon(":/icons/icons/sound.ico"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//слот замены фигуры
void MainWindow::ChangeFigure(int i)
{
    if((static_cast<ChosenFigure>(i)!=ChosenFigure::pawn)||((Horizontal!=1)&&(Horizontal!=8)))
    {
        if(i!=static_cast<int>(this->Figure))
        {
            board->CheckChessBoard();
            this->board->ChangeFigure(static_cast<ChosenFigure>(i),Vertical,Horizontal,side);
            this->Figure= static_cast<ChosenFigure>(i);
            board->MovableFigure(move);
            if(this->timer->isActive()){timer->stop();}
            if(ui->cB_Figure->currentIndex()!=i)
            {
                ui->cB_Figure->setCurrentIndex(static_cast<int>(this->Figure));
            }
        }
    }
    else
    {
        ui->cB_Figure->setCurrentIndex(static_cast<int>(this->Figure));
    }
}

//слот замены цвета фигуры
void MainWindow::ChangeSide(int i)
{
    if(i!=static_cast<int>(this->side))
    {
        board->CheckChessBoard();
        this->board->ChangeFigure(Figure,Vertical,Horizontal,static_cast<Side>(i));
        this->side=static_cast<Side>(i);
        board->MovableFigure(this->move);
        if(this->timer->isActive()){timer->stop();}
    }
}

//слот изменения вертикали
void MainWindow::ChangeVertical(int i)
{
    if(i!=(Vertical-1))
    {
        board->CheckChessBoard();
        this->board->ChangeFigure(Figure,i+1,Horizontal,side);
        Vertical = i+1;
        board->MovableFigure(this->move);
        if(this->timer->isActive()){timer->stop();}
    }
}

//слот изменения горизонтали
void MainWindow::ChangeHorizontal(int i)
{
    if(i!=(Horizontal-1))
    {
        if(this->Figure!=ChosenFigure::pawn||((i!=0)&&(i!=7)))
        {
                board->CheckChessBoard();
                this->board->ChangeFigure(Figure,Vertical,i+1,side);
                Horizontal = i+1;
                board->MovableFigure(this->move);
                if(this->timer->isActive()){timer->stop();}
        }
        else
        {
            ui->cB_Hotizontal->setCurrentIndex(Horizontal-1);
        }
    }
}

//движение фигуры
void MainWindow::ChangeMove(bool move)
{
    board->CheckChessBoard();
    this->move = move;
    board->MovableFigure(this->move);
    if(this->timer->isActive()){timer->stop();}
}

//слот возможных ходов
void MainWindow::ShowMove()
{
    board->ShowPosibleMove();
}

//слот изменения курсора
void MainWindow::ChangeCursor(bool closeHand)
{
    QCursor cursor;
    if(closeHand){cursor = QCursor(Qt::ClosedHandCursor);}
    else{ cursor = QCursor(Qt::OpenHandCursor);}
    ui->graphicsView->setCursor(cursor);
}

//слот включения таймера
void MainWindow::MovingFigures()
{
    timer->start(3000);
}

//слот при нажатии о игре комбобокса
void MainWindow::About()
{
    QMessageBox::information(this,"Информация о приложении",
                             "Приложение для обучения игре в шахматы предназначено для начинающих шахматистов.\n"
                             "Данное приложение рассчитано на детей дошкольного возраста и помогает начинающему шахматисту обучиться передвижению шахматных фигур.\n"
                             "В меню приложения Файл можно посмотреть информацию о приложении, управлять звуковыми эффектами, а также выйти из приложения.\n"
                             "В выпадающем списке ФИГУРА выбирается фигура для изучения, в выпадающем списке СТОРОНА выбирается цвет шахматной фигуры.\n"
                             "В выпадающих списках горизонталь и вертикаль можно выбрать координаты фигуры.\n"
                             "Поставив галочку на флажок фигура мобильна, можно управлять фигурой левой кнопкой мыши.\n"
                             "При неправильном ходе фигура возвращается на место и посылается предупреждающий звуковой сигнал (При галочке Вкл в меню Файл во вкладке Звук).\n"
                             "Кнопка ПОКАЗАТЬ ХОДЫ подсвечивает поля голубым цветом, на которые может пойти фигура. Для пешки есть еще и красный цвет. Этим цветом показаны поля, которые атакует пешка.\n"
                             "Кнопка ДВИГАЮЩАЯСЯ ФИГУРА передвигает фигуру на случайным образом выбранные поля, на которые может пойти фигура согласно правилам шахмат.\n"
                             "Кнопка ВЫХОД завершает работу приложения.");
}

//слот изменения вертикали при изменении позиции фигуры вручную или программой
void MainWindow::ChangeVert(int i)
{
    if(i>0&&i<=COLUMNS)
    {
        this->Vertical=i;
        ui->cB_Vertical->setCurrentIndex(i-1);
    }
}

//слот изменения горизонтали при изменении позиции фигуры вручную или программой
void MainWindow::ChangeHoriz(int i)
{
    if(i>0&&i<=ROWS)
    {
        this->Horizontal=i;
        ui->cB_Hotizontal->setCurrentIndex(i-1);
    }

}

void MainWindow::StopTimer()
{
    if(this->timer->isActive()){timer->stop();}
}

void MainWindow::ChooseFigure()
{
    if(this->timer->isActive()){timer->stop();}

    transformPawn = new TransformationPawn(this->side);
    transformPawn->setModal(true);
    transformPawn->show();
    connect(transformPawn,SIGNAL(ChangePawn(int )),this,SLOT(ChangeFigure(int)));
}

void MainWindow::PlayMedia()
{
    if(isSound){pPlayer->play();}
}

void MainWindow::OnSound()
{
    isSound=true;
    this->ui->actionOn->setChecked(true);
    this->ui->actionOff->setChecked(false);
}

void MainWindow::OffSound()
{
    isSound=false;
    this->ui->actionOn->setChecked(false);
    this->ui->actionOff->setChecked(true);
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
    {
        if(this->timer->isActive()){timer->stop();}
    }
}
