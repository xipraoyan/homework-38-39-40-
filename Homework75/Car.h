#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car
{
private:
    std::string m_name;
public:
    Car() = default;
    Car(const std::string& name);

    void print() const;
};

#endif
