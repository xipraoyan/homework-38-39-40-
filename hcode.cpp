#include <iostream>

class Animal
{
public:
    Animal()
    {
        std::cout << __func__ << std::endl;
    }
    virtual void voice()
    {
        std::cout << __func__ << std::endl;
    }
    
    virtual ~Animal()
    {
        std::cout << "default animal voice" << std::endl;
    }
        
};

class Zoo
{
public:
    int m_size;

    //Animal** array = new Animal*[2];

    Zoo(int size) : m_size(size)
    {
        std::cout << "Call Zoo parametrized Constructor" << std::endl;
    }

    Zoo(const Zoo &obj) = delete;
    Zoo operator = (const Zoo &obj) = delete;
    
    ~Zoo()
    {
        std::cout << "Call Zoo Destructor" << std::endl;  
    }
};

class Cat : public Animal
{
public:    
    Cat()
    {
        std::cout << "Call Cat Constructor" << std::endl;
    }
    void voice() override
    {
        std::cout << "Cat noise###########" << std::endl;
    }
    
    virtual ~Cat()
    {
        std::cout << "Call Cat Destructor" << std::endl;
    }
        
};

class Dog : public Animal
{
public:
    Dog()
    {
        std::cout << "Call Dog Constructor" << std::endl;
    }
    void voice() override 
    {
        std::cout << "Dog noise#############" << std::endl;
    }
    
    virtual ~Dog()
    {
        std::cout << "Call Dog Destructor" << std::endl;
    }
    
};

int main()
{
    Zoo zoo1(2);
    Cat cat1;
    Dog dog1;
    
    Animal** array = new Animal*[2];

    array[0] = &cat1;
    array[1] = &dog1;

    for(int i = 0 ; i < 2 ; i++)
    {
        array[i] -> voice();
    }
    
    for (int i = 0; i < 2; i++) 
    {
       delete array[i];  
       
    delete [] array;
    }
    
    return 0;
}



/*
class Pig : public Animal
{
public:
    Pig()
    {
        std::cout << "Call Pig Constructor" << std::endl;
    }
    void voice() override
    {
        std::cout << "Pig noise############" << std::endl;
    }
    virtual ~Pig()
    {
        std::cout << "Call Pig Destructor" << std::endl;
    }
};

class Elephant : public Animal
{
public:
    Elephant()
    {
        std::cout << "Call Elephant Constructor" << std::endl;
    }
    void voice() override
    {
        std::cout << "Elephant noise##############" << std::endl;
    }
    virtual ~Elephant()
    {
        std::cout << "Call Elephant Destructor" << std::endl;
    }
};
*/
/*
    Pig pig1;
    Elephant elephant1;
    zoo1.array[0] = &cat1;
    zoo1.array[1] = &dog1;
    zoo1.array[2] = &pig1;
    zoo1.array[3] = &elephant1;
    */ 