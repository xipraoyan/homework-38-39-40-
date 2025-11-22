#ifndef PULT_H
#define PULT_H

#include <iostream>


class Pult
{
public:
    virtual void button1() = 0;
    virtual void button2() = 0;
    virtual void button3() = 0;
    virtual void button4() = 0;
    virtual void button5() = 0;
};

class TVPult : public Pult
{
public:
    void button1() override;
    void button2() override;
    void button3() override;
    void button4() override;
    void button5() override;

    ~TVPult();
};

#endif