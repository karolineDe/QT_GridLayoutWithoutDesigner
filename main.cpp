#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QPushButton>
#include <QGridLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Grid Layout with 3 Buttons
    QGridLayout *gridLayout = new QGridLayout;
    QPushButton *b1 = new QPushButton("A");
    QPushButton *b2 = new QPushButton("B");
    QPushButton *b3 = new QPushButton("C");
    QPushButton *b4 = new QPushButton("D");
    QPushButton *b5 = new QPushButton("E");
    QPushButton *b6 = new QPushButton("F");

    // add Widget(*Widget, row, col, rowspan, colspan)
    // 0th row
    gridLayout->addWidget(b1,0,0,1,1);
    gridLayout->addWidget(b2,0,1,1,1);
    gridLayout->addWidget(b3,0,2,1,1);

    // 1th row
    gridLayout->addWidget(b4,1,0,1,1);

    // 2nd row with 2 colspan
    gridLayout->addWidget(b5,2,0,1,2);

    // 3rd row with 3 colspan
    gridLayout->addWidget(b6,3,0,1,3);

    // Create a Widget
    QWidget *w = new QWidget();

    // set the grid layout as a main layout
    w->setLayout(gridLayout);

    // windowtitle
    w->setWindowTitle("GridLayouts 3x4");

    // display
    w->show();

    // event loop
    return app.exec();
}
