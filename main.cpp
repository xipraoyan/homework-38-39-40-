#include "Car.h"

int main()
{
    Toyota t("Corolla", 4, 20000);
    BMW b("M3", 4, 75000);
    Mercedes m("E-Class", 4, 90000);

    t.print();
    std::cout << std::endl;
    b.print();
    std::cout << std::endl;
    m.print();

    return 0;
}