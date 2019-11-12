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
	cout << endl << "�����: " << brand << endl;
	cout << "������: " << model << endl;
	cout << "������������ ��������: " << velocity << endl;
	cout << "������������ ������: " << height << endl;
	cout << "���������: " << price() << endl;
}