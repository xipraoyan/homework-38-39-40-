#include "Amphibian.h"
#include <iostream>

Animal::Animal()
{
    std::cout << "default " << __func__ << std::endl;
}
Animal::Animal(int x) : m_MaxAge(x)
{
    std::cout << "parameterized " << __func__ << std::endl;
}
int Animal::Getx() const
{
    return m_MaxAge;
}
Animal::~Animal()
{
    std::cout << __func__ << std::endl;
}


MarineAnimal::MarineAnimal()
{
    std::cout << "default" << __func__ << std::endl;
}
MarineAnimal::MarineAnimal(int x) : Animal(x)
{
    std::cout << "parameterized " << __func__ << std::endl;
}
MarineAnimal::~MarineAnimal()
{
    std::cout << __func__ << std::endl;
}


TerrestrialAnimal::TerrestrialAnimal()
{
    std::cout << "default" << __func__ << std::endl;
}
TerrestrialAnimal::TerrestrialAnimal(int x) : Animal(x)
{
    std::cout << "parameterized " << __func__ << std::endl;
}
TerrestrialAnimal::~TerrestrialAnimal()
{
    std::cout << __func__ << std::endl;
}


Amphibian::Amphibian()
{
    std::cout << "default" << __func__ << std::endl;
}
Amphibian::Amphibian(int x) : MarineAnimal(x), TerrestrialAnimal(x), Animal(x)
{
    std::cout << "parameterized " << __func__ << std::endl;
}
Amphibian::~Amphibian()
{
    std::cout << __func__ << std::endl;
}