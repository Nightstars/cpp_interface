#include "FighterPlane.h"
#include <iostream>
using namespace std;
FighterPlane::FighterPlane(string code):Plane(code)
{
}

void FighterPlane::takeoff()
{
	cout << "FighterPlane->takeoff" << endl;
}

void FighterPlane::land()
{
	cout << "FightPlane->land" << endl;
}
