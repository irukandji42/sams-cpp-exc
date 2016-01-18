#include <iostream>
using namespace std;

const double Pi = 3.14159;

double Area(double Radius); //For circle
double Area(double Radius, double Height); //Overloaded for cylinder

int main()
{
	cout << "Enter z for Cylinder, c for Circle: ";
	char Choice = 'z';
	cin >> Choice;

	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;

	if (Choice == 'z')
	{
		cout << "Enter height: ";
		double Height = 0;
		cin >> Height;

		//Inoke overloaded variant of Area for Cylinder
		cout << "Area of cylinder is: " << Area(Radius, Height) << endl;
	}
	else
		cout << "Area of circle is: " << Area(Radius) << endl;

	return 0;
}

// for circle
double Area(double Radius)
{
	return Pi * Radius * Radius;
}

//overloaded for cylinder
double Area(double Radius, double Height)
{
	//reuse the are of circle
	return 2 * Area(Radius) + 2 * Pi * Radius * Height;
}