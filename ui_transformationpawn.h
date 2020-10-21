/********************************************************************************
** Form generated from reading UI file 'transformationpawn.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMATIONPAWN_H
#define UI_TRANSFORMATIONPAWN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TransformationPawn
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pB_Queen;
    QPushButton *pB_Rook;
    QPushButton *pB_Bishop;
    QPushButton *pB_Knight;

    void setupUi(QDialog *TransformationPawn)
    {
        if (TransformationPawn->objectName().isEmpty())
            TransformationPawn->setObjectName(QString::fromUtf8("TransformationPawn"));
        TransformationPawn->resize(400, 300);
        TransformationPawn->setMinimumSize(QSize(400, 0));
        horizontalLayout = new QHBoxLayout(TransformationPawn);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pB_Queen = new QPushButton(TransformationPawn);
        pB_Queen->setObjectName(QString::fromUtf8("pB_Queen"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pB_Queen->sizePolicy().hasHeightForWidth());
        pB_Queen->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pB_Queen);

        pB_Rook = new QPushButton(TransformationPawn);
        pB_Rook->setObjectName(QString::fromUtf8("pB_Rook"));
        sizePolicy.setHeightForWidth(pB_Rook->sizePolicy().hasHeightForWidth());
        pB_Rook->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pB_Rook);

        pB_Bishop = new QPushButton(TransformationPawn);
        pB_Bishop->setObjectName(QString::fromUtf8("pB_Bishop"));
        sizePolicy.setHeightForWidth(pB_Bishop->sizePolicy().hasHeightForWidth());
        pB_Bishop->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pB_Bishop);

        pB_Knight = new QPushButton(TransformationPawn);
        pB_Knight->setObjectName(QString::fromUtf8("pB_Knight"));
        sizePolicy.setHeightForWidth(pB_Knight->sizePolicy().hasHeightForWidth());
        pB_Knight->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pB_Knight);


        retranslateUi(TransformationPawn);

        QMetaObject::connectSlotsByName(TransformationPawn);
    } // setupUi

    void retranslateUi(QDialog *TransformationPawn)
    {
        TransformationPawn->setWindowTitle(QCoreApplication::translate("TransformationPawn", "Dialog", nullptr));
        pB_Queen->setText(QString());
        pB_Rook->setText(QString());
        pB_Bishop->setText(QString());
        pB_Knight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransformationPawn: public Ui_TransformationPawn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMATIONPAWN_H
