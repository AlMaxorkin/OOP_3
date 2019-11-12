#include "Fighter.h"

Fighter::Fighter(string B, string M, double V, double H) :Plane(B, M, V, H) {};

Fighter::~Fighter()
{
	cout << "Fighter Destructor" << endl;
}

double Fighter::price()
{
	return 3 * (velocity * 1000 + height * 100);
}