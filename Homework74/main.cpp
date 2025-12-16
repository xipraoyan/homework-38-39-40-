#include "DynamicCast.h"
#include <iostream>

int main(int argc, char* argv[])
{
    Dog* ptr1 = new Dog("Golden Retriever");
    Animal* ptr2 = dynamic_cast<Animal*>(ptr1);

    if(nullptr != ptr2)
    {
        std::cout << "ok" << std::endl;
    } else {
        std::cout << "fail" << std::endl;
    }

    delete ptr1;

    return 0;
}