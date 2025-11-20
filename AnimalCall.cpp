//AnimalCall.cpp//
#include "Animal.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Animal* ptr = new Dog("Golden Retriever");
    ptr -> voice();

    delete ptr;

    return 0;
}