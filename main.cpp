#include <QCoreApplication>
#include <iostream>
#include "ConsoleColor.h"

//using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << green << "Hello" << red << " WORLD!" << yellow;
    //with full of colors!
    return a.exec();
}

