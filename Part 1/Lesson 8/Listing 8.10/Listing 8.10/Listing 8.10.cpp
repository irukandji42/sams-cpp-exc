// Use const keyword in calculating the area
// of a circle when radius and pi are supplied
// as pointers

#include <iostream>
using namespace std;

void CalcArea(const double* const pPi, // const pointer to const data
			  const double* const pRadius, //ie nothing can be changed
				    double* const pArea) // change pointed value, not address
{
	// check pointers before using!
	if (pPi && pRadius && pArea)
	{
		*pArea = (*pPi) * (*pRadius) * (*pRadius);
	}
}

int main()
{
	const double Pi = 3.14159;

	cout << "Enter radius of circle: ";
	double Radius = 0;
	cin >> Radius;

	double Area = 0;
	CalcArea( &Pi, &Radius, &Area);

	cout << "Area is = " << Area << endl;

	return 0;
}