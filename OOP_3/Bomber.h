#pragma once
#include "Plane.h"
class Bomber :public Plane
{
	double price();
public:
	Bomber(string, string, double, double);
	~Bomber();
};

