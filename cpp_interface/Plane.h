#pragma once
#include "Flyable.h"
#include <string>
using namespace std;
class Plane :
    public Flyable
{
public:
    Plane(string code);
    //virtual void takeoff();
    //virtual void land();
    void printCode();
private:
    string m_strCode;
};

