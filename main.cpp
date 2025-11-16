#include "Zoo.h"

int main(int argc, char* argv[])
{
    Zoo z(2);

    z.setAnimal(0, new Dog());
    z.setAnimal(1, new Cow());

    z.voice();

    return 0;
}