#ifndef ZOO_H
#define ZOO_H

#include <iostream>

class Animal
{
public:
    virtual void printVoice();
    virtual ~Animal();
};

class Dog : public Animal
{
public:
    virtual void printVoice();
};

class Cow : public Animal
{
public:
   virtual void printVoice();
};

class Zoo
{
private:
    Animal** animal;
    int m_size;
public:
    Zoo(int size);
    void setAnimal(int i, Animal* a);
    void voice();
    ~Zoo();
};

#endif
