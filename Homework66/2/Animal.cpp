
#include "Animal.h"

Animal::Animal(const std::string& type) : m_type(type)
{
    std::cout << __func__ << std::endl;
}

Animal::Animal(Animal&& other) noexcept : m_type(std::move(other.m_type))
{    
    std::cout << __func__ << std::endl;
    //this -> m_type = std::move(other.m_type);
}

Animal& Animal::operator=(Animal&& other) noexcept
{
    std::cout << __func__ << std::endl;
    if(this != &other)
    {
        this -> m_type = std::move(other.m_type);
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << __func__ << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    std::cout << __func__ << std::endl;
}

void Dog::voice()
{
    std::cout << __func__ << std::endl;
    std::cout << "type: " << m_type << std::endl;
    std::cout << "Dog voice: haf haf" << std::endl;
}

Dog::Dog(Dog&& other) noexcept : Animal(std::move(other))
{
    std::cout << __func__ << std::endl;
    //this -> m_type = std::move(other.m_type);
}

Dog& Dog::operator=(Dog&& other) noexcept
{
    std::cout << __func__ << std::endl;
    if(this != &other)
    {
        this -> m_type = std::move(other.m_type);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << __func__ << std::endl;
}