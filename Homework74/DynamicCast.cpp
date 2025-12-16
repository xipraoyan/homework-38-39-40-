#include "DynamicCast.h"

Animal::Animal(const std::string& type) : m_type(type)
{

}

Animal::~Animal()
{

}

Dog::Dog(const std::string& type) : Animal(type)
{
    
}

void Dog::voice()
{
    std::cout << "type: " << m_type << std::endl;
    std::cout << "Dog voice: haf haf" << std::endl;
}

Dog::~Dog()
{

}