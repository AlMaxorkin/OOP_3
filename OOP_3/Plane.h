#pragma once
#include <iostream> 

using namespace std;

class Plane
{
protected:
	string brand;
	string model;
	double velocity;
	double height;
	virtual double price();
public:
	void info();
	Plane(string, string, double, double);
	~Plane();
};

