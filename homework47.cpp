#include <iostream>

class Car
{
    private:
    int m_year;
    int m_price;

    public:
    Car(int y, int p)
    {
        m_year = y;
        m_price = p;
    }
    
    Car(const Car& other)
    {
        m_year = other.m_year;
        m_price = other.m_price;
    }

    Car& operator = (const Car& other)
    {
        if (this != &other)
        {
            this -> m_year = other.m_year;
            this -> m_price = other.m_price;
        }
        return *this;
    }
};

int main(int argc, char* argv[])
{
    Car a(2020, 20000);
    Car b = a;
    Car c(2010, 10000);
    c = a;

    return 0;
}