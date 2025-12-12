#include <iostream>

template<int n>
class fibonacci
{
public:
  static const int val = fibonacci<n-1>::val + fibonacci<n-2>::val;
};

template<>
class fibonacci<0>
{
public:
  static const int val = 0;
};

template<>
class fibonacci<1>
{
public:
  static const int val = 1;
};

int main()
{
    std::cout << fibonacci<10>::val << std::endl;
    
    return 0;
}