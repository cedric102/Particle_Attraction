#include "mainwindow.h"
#include <QApplication>
#include <qpushbutton.h>
#include <Particle.h>
#include "Implementation_1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Implementation_1 * imp_1 = new Implementation_1();
    imp_1->Run();
    free(imp_1);

    QPushButton hello( "Hello World!" , 0 );
    hello.resize( 1000 , 300 );

    hello.show();

    return a.exec();
}
