#include "Parking.h"

Parking* Parking::instance = nullptr;

Parking::Parking() : size(2)
{
    car = new Car[size]
    {
        Car("BMW"),
        Car("Audi")
    };

    std::cout << __func__ << std::endl;
}

Parking& Parking::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Parking;
    }
    return *instance;
}

void Parking::printCar() const
{
    for(int i = 0; i < size; i++)
    {
        car[i].print();
    }
}

Parking::~Parking()
{
    delete[] car;
}