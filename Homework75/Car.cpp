#include "Car.h"

Car::Car(const std::string& name) : m_name(name) 
{

}

void Car::print() const
{
    std::cout << m_name << std::endl;
}