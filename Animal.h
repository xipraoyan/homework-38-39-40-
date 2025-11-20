//Animal.h//
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
public:
    std::string m_type;

    
    Animal(const Animal& other) = default;
    Animal& operator = (const Animal& other) = default;

    Animal(const std::string& type);
    virtual void voice() = 0;

    virtual ~Animal();

};

class Dog : public Animal
{
public:    
    Dog(const std::string& type);
    void voice() override;

    ~Dog();
};

#endif