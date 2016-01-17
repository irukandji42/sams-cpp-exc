#include <iostream>
using namespace std;

const double Pi = 3.14159;

//Declaration contains two parameters
double SurfaceArea(double Radius, double Height);

int main()
{
	cout << "Enter the radius of the cylinder: " << endl;
	double InRadius = 0;
	cin >> InRadius;
	cout << "Enter the height of the cylinder: " << endl;
	int InHeight = 0;
	cin >> InHeight;

	cout << "Surface Area:" << SurfaceArea(InRadius, InHeight) << endl;

	return 0;
}

//Defining the function, the implementation
double SurfaceArea(double Radius, double Height)
{
	double Area = 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
	return Area;
}