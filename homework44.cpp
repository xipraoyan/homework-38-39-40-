#include <iostream>
#include <string>

class Car 
{
    private:
    std::string m_name;
    std::string m_engine;
    std::string m_colour;
    int m_year;
    int m_price;

    public:

       Car(const std::string& name, const std::string& engine, const std::string& colour, int year, int price)
    {
        m_name = name; 
        m_engine = engine; 
        m_colour = colour; 
        m_year = year; 
        m_price = price;
    }

    public:
       void print()
       {
          std::cout << "name: " << m_name << std::endl;
          std::cout << "engine: " << m_engine << std::endl;
          std::cout << "colour: " << m_colour << std::endl;
          std::cout << "year: " << m_year << std::endl;
          std::cout << "price: " << m_price << std::endl;

       }

};

int main(int argc, char* argv[])
{
    Car Mercedes("E190", "6-cylinder gasoline", "blue", 1990, 7500);

    Mercedes.print();

    return 0;
}
