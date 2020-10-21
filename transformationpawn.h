#ifndef TRANSFORMATIONPAWN_H
#define TRANSFORMATIONPAWN_H

#include <QDialog>
#include"constants.h"

namespace Ui {
class TransformationPawn;
}

//класс трансформации пешки
class TransformationPawn : public QDialog
{
    Q_OBJECT

public:
    explicit TransformationPawn(Side side, QWidget *parent = nullptr);
    ~TransformationPawn();

private:
    Ui::TransformationPawn *ui;

    // QWidget interface
protected:
    virtual void resizeEvent(QResizeEvent *event);//сделать размер иконки равный размерам кнопки
signals:
    void ChangePawn(int i);
private slots:
    void on_pB_Queen_clicked();
    void on_pB_Rook_clicked();
    void on_pB_Bishop_clicked();
    void on_pB_Knight_clicked();
};

#endif // TRANSFORMATIONPAWN_H
