#include <iostream>
#include <string>

class Engine
{
protected:
   int m_power;

public:
   void setPower(int power)
   {
    this-> m_power = power;
   }

   int getPower()
   {
    return m_power;
   }
};

class Car
{
protected:
    std::string m_model;
    int m_wheels;
    double m_price;
    Engine engine;
public:
    Car(const std::string& model, int wheels, double price)
    {
     m_model = model;
     m_wheels = wheels;
     m_price = price;
     engine.setPower(100);
    }
};

class Toyota : public Car
{
public:
  Toyota(const std::string& model, int wheels , double price) : Car(model, wheels, price)
  {
    engine.setPower(120);
  }
  void print()
  {
    std::cout << " Toyota " << std::endl;
    std::cout << "Model:" << m_model << std::endl;
    std::cout << "Wheels:" << m_wheels << std::endl;
    std::cout << "Price:" << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
  }
};

class BMW : public Car
{
public:
  BMW(const std::string& model, int wheels, double price) : Car(model, wheels, price)
  {
    engine.setPower(250);
  }
  void print()
  {
    std::cout << " BMW " << std::endl;
    std::cout << "Model:" << m_model << std::endl;
    std::cout << "Wheels:" << m_wheels << std::endl;
    std::cout << "Price:" << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
  }
};

class Mercedes : public Car
{
public:
  Mercedes(const std::string& model, int wheels, double price) : Car(model, wheels, price)
  {
    engine.setPower(300);
  }
  void print()
  {
    std::cout << " Mercedes " << std::endl;
    std::cout << "Model:" << m_model << std::endl;
    std::cout << "Wheels:" << m_wheels << std::endl;
    std::cout << "Price:" << m_price << "$" << std::endl;
    std::cout << "Power: " << engine.getPower() << std::endl;
  }
};

int main(int argc, char* argv[])
{
    Toyota t("Corolla", 4, 20000);
    BMW b("M3", 4, 75000);
    Mercedes m("E-Class", 4, 90000);

    t.print();
    std::cout << std::endl;
    b.print();
    std::cout << std::endl;
    m.print();
}


