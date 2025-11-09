#include "Matrix.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Matrix a(3, 3);
    std::cout << std::endl;
    
    Matrix b(a);
    std::cout << std::endl;

    Matrix c(a);
    std::cout << std::endl;
    c = a;
    
    return 0;
}