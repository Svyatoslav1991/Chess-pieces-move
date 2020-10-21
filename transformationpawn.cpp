#include "transformationpawn.h"
#include "ui_transformationpawn.h"
#include <QPixmap>
#include"constants.h"



TransformationPawn::TransformationPawn(Side side,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransformationPawn)
{
    Qt::WindowFlags flags = Qt::Window;

    flags |=Qt::CustomizeWindowHint;
    flags |=Qt::WindowTitleHint;
    flags |=Qt::WindowStaysOnTopHint;
    this->setWindowFlags(flags);

    QPixmap Rook, Queen, Knight, Bishop;
    ui->setupUi(this);
    if(side == Side::white)
    {
        Rook.load(":/ChessFigures/ChessFigures/white_rook.png");
        Queen.load(":/ChessFigures/ChessFigures/white_queen.png");
        Knight.load(":/ChessFigures/ChessFigures/white_knight.png");
        Bishop.load(":/ChessFigures/ChessFigures/white_bishop.png");
    }
    else
    {
        Rook.load(":/ChessFigures/ChessFigures/black_rook.png");
        Queen.load(":/ChessFigures/ChessFigures/black_queen.png");
        Knight.load(":/ChessFigures/ChessFigures/black_knight.png");
        Bishop.load(":/ChessFigures/ChessFigures/black_bishop.png");
    }



    ui->pB_Rook->setIcon(Rook);
    ui->pB_Queen->setIcon(Queen);
    ui->pB_Bishop->setIcon(Bishop);
    ui->pB_Knight->setIcon(Knight);

    this->setFixedSize(4*CELLLENGTH,CELLLENGTH);

    this->setWindowTitle(tr("Сhoose figure"));
}

TransformationPawn::~TransformationPawn()
{
    delete ui;
}

void TransformationPawn::resizeEvent(QResizeEvent *event)
{
    ui->pB_Rook->setIconSize(ui->pB_Rook->size());
    ui->pB_Queen->setIconSize(ui->pB_Queen->size());
    ui->pB_Bishop->setIconSize(ui->pB_Bishop->size());
    ui->pB_Knight->setIconSize(ui->pB_Knight->size());
}

void TransformationPawn::on_pB_Queen_clicked()
{
    emit ChangePawn(static_cast<int>(ChosenFigure::Queen));
    this->close();
}

void TransformationPawn::on_pB_Rook_clicked()
{
    emit ChangePawn(static_cast<int>(ChosenFigure::Rook));
    this->close();
}

void TransformationPawn::on_pB_Bishop_clicked()
{
    emit ChangePawn(static_cast<int>(ChosenFigure::Bishop));
    this->close();
}

void TransformationPawn::on_pB_Knight_clicked()
{
    emit ChangePawn(static_cast<int>(ChosenFigure::Knight));
    this->close();
}
