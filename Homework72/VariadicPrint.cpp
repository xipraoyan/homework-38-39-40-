#include <iostream>

 void print()
{
    std::cout << __func__ << " func" << std::endl;
}

template <typename T, typename... Types>
void print(T v1, Types ...v2)
{
    std::cout << __func__ << " variadic func" << std::endl;
    std::cout << v1 << std::endl;

    print(v2...);
}

int main(int argc, char* argv[])
{
    print (5, 8.7, "number");

    return 0;
}