#include "Plane.h"
Plane::Plane(string B, string M, double V, double H) :brand(B), model(M), velocity(V), height(H) {};

Plane::~Plane()
{
	cout << "Plane Destructor" << endl;
}

double Plane::price()
{
	return velocity * 1000 + height * 100;
}

void Plane::info()
{
	cout << endl << "Марка: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Максимальная скорость: " << velocity << endl;
	cout << "Максимальная высота: " << height << endl;
	cout << "Стоимость: " << price() << endl;
}