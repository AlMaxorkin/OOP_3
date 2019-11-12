#include "Bomber.h"

Bomber::Bomber(string B, string M, double V, double H) :Plane(B, M, V, H) {};

Bomber::~Bomber()
{
	cout << "Bomber Destructor" << endl;
}

double Bomber::price()
{
	return 2 * (velocity * 1000 + height * 100);
}
