#ifndef CONSTANTS_H
#define CONSTANTS_H

#include<QBrush>

enum class ChosenFigure{King,Rook,Bishop,Queen,pawn,Knight};//выбранная фигура для изучения
const int ROWS = 8, COLUMNS = 8;//количество строк и столбцов
const int CELLLENGTH = 100;//длина шахматного поля
const QBrush LIGHTCELL = Qt::lightGray;//Светлый цвет клетки
const QBrush DARKCELL = Qt::darkGray;//Темный цвет клетки
enum class Side{white,black};//Команда фигуры
enum class CellColor{light,dark};//Темная или светлая клетка


#endif // CONSTANTS_H
