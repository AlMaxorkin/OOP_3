#pragma once
#include "Plane.h"
class Fighter :public Plane
{
	double price();
public:
	Fighter(string, string, double, double);
	~Fighter();
};

