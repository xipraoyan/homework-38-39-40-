#include "Pult.h"
#include <iostream>

void TVPult::button1()
{
  std::cout << "botton 1: on-off" << std::endl;
}

void TVPult::button2()
{
    std::cout << "botton 2: adding volume" << std::endl;
}

void TVPult::button3()
{
    std::cout << "botton 3: reducing volume" << std::endl;
}

void TVPult::button4()
{
    std::cout << "botton 4: changing channels" << std::endl;
}

void TVPult::button5()
{
    std::cout << "botton 5: back home" << std::endl;
}

TVPult::~TVPult()
{

}