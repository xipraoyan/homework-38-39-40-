#include <iostream>

void* operator new(std::size_t size)
{
    std::cout << size << std::endl;
    void* p = std::malloc(size);
    return p;
}

void operator delete(void* p)
{
    std::free(p);
}
int main()
{
    int* obj = new int;
    delete obj;

    return 0;
}