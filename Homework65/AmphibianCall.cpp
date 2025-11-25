#include "Amphibian.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Amphibian Frog(10);

    std::cout << "frog's max age: " << Frog.Getx() << "years" << std::endl;

    return 0;
}