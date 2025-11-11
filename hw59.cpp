#include <iostream>
#include <string>

class Animal 
{
protected:
    std::string m_type;
    int m_legs;
    int m_height;

public:
    Animal(const std::string& type, int legs, int height)
        : m_type(type), m_legs(legs), m_height(height) 
    {

    }

    ~Animal()
    {

    }
};


class Dog : public Animal 
{
private:
    std::string m_colour;
    int m_age;
    std::string m_breed; 

public:
    Dog(const std::string& type, int legs, int height, const std::string& colour, int age, const std::string& breed)
        : Animal(type, legs, height), m_colour(colour), m_age(age), m_breed(breed) {}

    void print() 
    {
        std::cout << "Type: " << m_type << std::endl;
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Colour: " << m_colour << std::endl;
        std::cout << "Height: " << m_height << "m" << std::endl;
        std::cout << "Age: " << m_age << std::endl;
        std::cout << "Breed: " << m_breed << std::endl;
    }
};


class Snake : public Animal 
{
private:
    std::string m_habitat;
    std::string m_skinColor;  
    double m_length;  

public:
    Snake(int legs, int height, const std::string& habitat, const std::string& skinColor, double length)
        : Animal("Snake", legs, height), m_habitat(habitat), m_skinColor(skinColor), m_length(length) {}

    void print()
    {
        std::cout << "Type: " << m_type << std::endl;
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Height: " << m_height << "m" << std::endl;
        std::cout << "Habitat: " << m_habitat << std::endl;
        std::cout << "Skin Color: " << m_skinColor << std::endl;
        std::cout << "Length: " << m_length << "m" << std::endl;
    }
};


class Eagle : public Animal 
{
private:
    double m_wingSpan; 
    std::string m_featherColor; 
    std::string m_prey; 

public:
    Eagle(int legs, int height, double wingSpan, const std::string& featherColor, const std::string& prey)
        : Animal("Eagle", legs, height), m_wingSpan(wingSpan), m_featherColor(featherColor), m_prey(prey) {}

    void print() 
    {
        std::cout << "Type: " << m_type << std::endl;
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Height: " << m_height << std::endl;
        std::cout << "Wing Span: " << m_wingSpan << std::endl;
        std::cout << "Feather Color: " << m_featherColor << std::endl;
        std::cout << "Endangered: " << m_prey << std::endl;
    }
};


class Octopus : public Animal 
{
private:
    int m_tentacles;
    std::string m_skinTexture; 
    std::string m_behaviour;  

public:
    Octopus(int height, int tentacles, const std::string& skinTexture, const std::string& behaviour)
        : Animal("Octopus", 0, height), m_tentacles(tentacles), m_skinTexture(skinTexture), m_behaviour(behaviour) {}

    void print()
    {
        std::cout << "Type: " << m_type << std::endl;
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Tentacles: " << m_tentacles << std::endl;
        std::cout << "Height: " << m_height << std::endl;
        std::cout << "Skin Texture: " << m_skinTexture << std::endl;
        std::cout << "Behaviour: " << m_behaviour << std::endl;
    }
};


class Snail : public Animal 
{
private:
    double m_speed;
    double m_shellDiameter;  
    int m_age;  
public:
    Snail(int height, double speed, double shellDiameter, int age)
        : Animal("Snail", 1, height), m_speed(speed), m_shellDiameter(shellDiameter), m_age(age) {}

    void print() 
    {
        std::cout << "Type: " << m_type << std::endl; 
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Height: " << m_height << std::endl;
        std::cout << "Speed: " << m_speed << std::endl;
        std::cout << "Shell Diameter: " << m_shellDiameter << " cm " << std::endl;
        std::cout << "Max age: " << m_age << std::endl;
    }
};


class Monkey : public Animal 
{
private:
    std::string m_furColour;
    std::string m_ability;
    std::string m_dietType;

public:
    Monkey(int legs, int height, const std::string& furColour, const std::string& ability, const std::string& dietType)
        : Animal("Monkey", legs, height), m_furColour(furColour), m_ability(ability), m_dietType(dietType) {}

    void print() 
    {
        std::cout << "Type: " << m_type << std::endl;
        std::cout << "Legs: " << m_legs << std::endl;
        std::cout << "Fur Colour: " << m_furColour << std::endl;
        std::cout << "Height: " << m_height << std::endl;
        std::cout << "Ability: " << m_ability << std::endl;
        std::cout << "Diet Type: " << m_dietType << std::endl;
    }
};

int main(int argc, char* argv[]) 
{
    Dog husky("Husky", 4, 1, "White", 5, "Siberian");
    Snake cobra(0, 0.5, "deserts", "Green", 2.5);
    Eagle goldenEagle(2, 1, 2.5, "Brown", "fish");  
    Octopus giantOctopus(1.2, 8, "Smooth", "changing colour");  
    Snail gardenSnail(0.2, 0.048, 15.0, 5); 
    Monkey chimpanzee(2, 1.5, "Brown", "climbing", "Omnivore");

    
    husky.print();
    std::cout << std::endl;
    cobra.print();
    std::cout << std::endl;
    goldenEagle.print();
    std::cout << std::endl;
    giantOctopus.print();
    std::cout << std::endl;
    gardenSnail.print();
    std::cout << std::endl;
    chimpanzee.print();

    return 0;
}