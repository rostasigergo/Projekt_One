#include <QCoreApplication>
#include <iostream>
#include "ConsoleColor.h"

//using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << green << "Hello " << red << "WORLD! " << yellow << "with " << green << "full " << white << "of " << red << "colors!:)";

    //Csak hogy legyen itt még 1 sor
    return a.exec();
}

