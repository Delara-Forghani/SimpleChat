#include <QtCore/QCoreApplication>
#include "chatserver.h"
/*
*main.cpp is the runnable source file used to create a chatserver object with an quint16 passed along
*  to the constructor as its port(1234 in this case)
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ChatServer server(1234);

    return a.exec();
}
