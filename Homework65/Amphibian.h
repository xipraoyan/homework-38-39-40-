#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include <iostream>
#include <string>

class Animal
{
public:
    int m_MaxAge;

    Animal();
    Animal(int x);
    int Getx() const;

    Animal(const Animal& other) = default;
    Animal& operator = (const Animal& other) = default;

    ~Animal();
};

class MarineAnimal : virtual public Animal
{
public:
    MarineAnimal();
    MarineAnimal(int x);

    ~MarineAnimal();
};

class TerrestrialAnimal : virtual public Animal
{
public:
    TerrestrialAnimal();
    TerrestrialAnimal(int x);

    ~TerrestrialAnimal();
};

class Amphibian : virtual public MarineAnimal, virtual public TerrestrialAnimal
{
public:
    Amphibian();
    Amphibian(int x);

    ~Amphibian();
};

#endif