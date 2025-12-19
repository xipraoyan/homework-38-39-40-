#include "Parking.h"

int main()
{
    Parking& p1 = Parking::getInstance();
    Parking& p2 = Parking::getInstance();

    p1.printCar();
    p2.printCar();

    return 0;
}