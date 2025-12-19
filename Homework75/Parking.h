#ifndef PARKING_H
#define PARKING_H

#include "Car.h"
#include <iostream>

class Parking
{
private:
    Parking();
    static Parking* instance;

    Car* car;
    int size;

public:
    static Parking& getInstance();
    
    void printCar() const;

    ~Parking();
};

#endif