#include "chartviewer.h"

void ChartViewer::BarraDeiMenu(QVBoxLayout* MainLayout)
{
    QMenuBar* Menu= new QMenuBar(this);

    QMenu* file= new QMenu("File", Menu);
    QMenu* Modifica= new QMenu("Modifica", Menu);

    Menu->addMenu(file);
    Menu->addMenu(Modifica);

    file->addAction(new QAction("Nuovo", file));
    file->addAction(new QAction("Importa", file));
    file->addAction(new QAction("Salva con nome", file));

    Modifica->addAction(new QAction("BHO", Modifica));

    MainLayout->addWidget(Menu);
}

void ChartViewer::Schermo(QVBoxLayout* MainLayout)
{
    QVBoxLayout* ScreenLayout = new QVBoxLayout;

    QFrame* chart= new QFrame;

    QHBoxLayout* ImageLayout = new QHBoxLayout;
    ImageLayout->addWidget(new QLabel(this));

    chart->setStyleSheet("background-color: rgb(50,50,50)");
    chart->setLayout(ImageLayout);
    chart->layout()->setMargin(0);
    chart->layout()->setSpacing(0);
    chart->layout()->setAlignment(Qt::AlignCenter);
    chart->setMinimumSize(1024,720);
    chart->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    ScreenLayout->addWidget(chart);
    ScreenLayout->setSpacing(0);
    MainLayout->addLayout(ScreenLayout);
}

void ChartViewer::Pulsanti(QVBoxLayout* MainLayout)
{
    QHBoxLayout* controlsLayout = new QHBoxLayout;

    QHBoxLayout* ButtonLayout = new QHBoxLayout;

    QPushButton* ModificaDati = new QPushButton("Modifica Dati");
    QPushButton* Elimina = new QPushButton("Elimina Grafico");
    QPushButton* CambiaTipo = new QPushButton("Cambia tipo grafico");

    ButtonLayout->addWidget(ModificaDati);
    ButtonLayout->addWidget(Elimina);
    ButtonLayout->addWidget(CambiaTipo);
    ButtonLayout->setSpacing(5);
    ButtonLayout->setContentsMargins(25, 0, 25, 0);

    controlsLayout->addLayout(ButtonLayout);

    controlsLayout->setSpacing(150);
        controlsLayout->setContentsMargins(200, 25, 200, 25);

        MainLayout->addLayout(controlsLayout);
}

ChartViewer::ChartViewer(QWidget *parent) : QWidget(parent){
    QVBoxLayout* MainLayout= new QVBoxLayout;

    BarraDeiMenu(MainLayout);

    Schermo(MainLayout);

    Pulsanti(MainLayout);

    MainLayout->setSpacing(0);

    resize(QSize(1024,720));

    setLayout(MainLayout);
}
