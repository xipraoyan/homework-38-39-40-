#include <iostream>
void initArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void createArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void* operator new[](std::size_t size)
{
    std::cout << size << std::endl;
    void* p = std::malloc(size);
    return p;
}

void operator delete[](void* p)
{
    std::free(p);
}

int main()
{

    int * obj = new int;
    delete obj;

    int size = 5;
    int* arr = new int[size];
    initArr(arr,size);
    createArr(arr, size);


    return 0;
}