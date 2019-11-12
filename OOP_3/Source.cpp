#include <iostream>
#include "Plane.h"
#include "Bomber.h"
#include "Fighter.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Plane objPlane("Boeing", "747", 900, 4000);
	Bomber objBomber("рс", "160", 960, 5000);
	Fighter objFighter("Cс", "35", 2778, 5000);

	objPlane.info();
	objBomber.info();
	objFighter.info();
	
	cout << endl;

	return 0;
}