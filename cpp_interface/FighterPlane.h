#pragma once
#include "Plane.h"
class FighterPlane :
    public Plane,
    public Flyable
{
public:
    FighterPlane(string code);
    virtual void takeoff();
    virtual void land();
};

