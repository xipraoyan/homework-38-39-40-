#include "Zoo.h"

void Animal::printVoice()
{
    std::cout << "animal voices" << std::endl;
}

Animal::~Animal()
{

}

void Dog::printVoice()
{
    std::cout << "Dog voice: haf" << std::endl;
}

void Cow::printVoice()
{
    std::cout << "Cow voice: moo" << std::endl;
}

Zoo::Zoo(int size) : m_size(size)
{
    animal = new Animal*[size];
}

void Zoo::setAnimal(int i, Animal* a)
{
    if (i >= 0 && i < m_size)
        animal[i] = a;
}

void Zoo::voice()
{
    for (int i = 0; i < m_size; i++)
    {
        animal[i] -> printVoice();
    }
}

Zoo::~Zoo()
{
    for (int i = 0; i < m_size; i++)
        delete animal[i];

    delete[] animal;
}

