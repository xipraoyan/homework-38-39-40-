#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Engine
{
protected:
    int m_power;
public:
    void setPower(int power);
    int getPower();
};

class Car
{
protected:
    std::string m_model;
    int m_wheels;
    double m_price;
    Engine engine;

public:
    Car(const std::string& model, int wheels, double price);
    void print();  
};

class Toyota : public Car
{
public:
    Toyota(const std::string& model, int wheels, double price);
    void print();
};

class BMW : public Car
{
public:
    BMW(const std::string& model, int wheels, double price);
    void print();
};

class Mercedes : public Car
{
public:
    Mercedes(const std::string& model, int wheels, double price);
    void print();
};

#endif