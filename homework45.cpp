#include <iostream>
#include <string>


class Driver 
{
  public:
  Driver(const std::string& name)
  {
    m_name = name;
  }
  void print()
  {
    std::cout << m_name << "'s car" << std::endl;
  }

  private:
  std::string m_name;

};

class Engine
{
  public:
   void setPower(int power)
   {
    this-> m_power = power;
   }

   int getPower()
   {
    return m_power;
   }

   private:
   int m_power;
};

class Car
{
public:
   
   Car(const std::string& model)
   {
     m_model = model;
     engine.setPower(100);
     m_driver = nullptr;
   }

public:   
   Driver* getDriver()
   {
    return m_driver;
   }
   void setDriver(Driver* ptr)
   {
      m_driver = ptr;
   }

private:
std::string m_model;
Engine engine;

Driver* m_driver;

};

int main(int argc, char* argv[])
{
  Car car("BMW");
  Driver driver("John");

  car.setDriver(&driver);
  if (car.getDriver())
    {
        car.getDriver()->print();
    };

    return 0;
}