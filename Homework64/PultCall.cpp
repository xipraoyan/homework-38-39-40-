#include "Pult.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Pult* ptr = new TVPult();
    ptr -> button1();
    ptr -> button2();
    ptr -> button3();
    ptr -> button4();
    ptr -> button5();

    delete ptr;

    return 0;
}