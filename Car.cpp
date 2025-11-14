#include "Car.h"

void Engine::setPower(int power)
{
    this -> m_power = power;
}

int Engine::getPower()
{
    return m_power;
}

Car::Car(const std::string& model, int wheels, double price)
{
    m_model = model;
    m_wheels = wheels;
    m_price = price;
    engine.setPower(100);
}

Toyota::Toyota(const std::string& model, int wheels, double price) : Car(model, wheels, price)
{
    engine.setPower(120);
}

void Toyota::print()
{
    std::cout << " Toyota " << std::endl;
    std::cout << "Model: " << m_model << std::endl;
    std::cout << "Wheels: " << m_wheels << std::endl;
    std::cout << "Price: " << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
}

BMW::BMW(const std::string& model, int wheels, double price) : Car(model, wheels, price)
{
    engine.setPower(250);
}

void BMW::print()
{
    std::cout << " BMW " << std::endl;
    std::cout << "Model: " << m_model << std::endl;
    std::cout << "Wheels: " << m_wheels << std::endl;
    std::cout << "Price: " << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
}

Mercedes::Mercedes(const std::string& model, int wheels, double price) : Car(model, wheels, price)
{
    engine.setPower(300);
}

void Mercedes::print()
{
    std::cout << " Mercedes " << std::endl;
    std::cout << "Model: " << m_model << std::endl;
    std::cout << "Wheels: " << m_wheels << std::endl;
    std::cout << "Price: " << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
}