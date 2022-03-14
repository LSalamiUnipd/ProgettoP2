#ifndef CHARTVIEWER_H
#define CHARTVIEWER_H

#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFrame>
#include <QLabel>
#include <QPushButton>



class ChartViewer: public QWidget{
    Q_OBJECT

    void BarraDeiMenu(QVBoxLayout* MainLayout);

    void Schermo(QVBoxLayout* MainLayout);

    void Pulsanti(QVBoxLayout* MainLayout);

public:
    explicit ChartViewer(QWidget *parent =nullptr);


signals:
};

#endif // CHARTVIEWER_H
