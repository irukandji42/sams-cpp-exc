//Write overloaded functions that calculate the volume of a sphere and a cylinder.

#include <iostream>
using namespace std;

const double Pi = 3.14159;

double TotalVolume(double Radius);
double TotalVolume(double Radius, double Height);

int main()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;

	cout << "Would you like to calculate the volume of a cylinder or a sphere? (c/s)? ";
	char UserChoice = 'c';
	cin >> UserChoice;

	if (UserChoice == 'c')
	{
		cout << "Please enter the height: ";
		double Height = 0;
		cin >> Height;

		cout << "The volume of a cylinder with radius " << Radius << " and height " \
			<< Height << " is " << TotalVolume(Radius, Height) << "." << endl;
	}
	else
	{
		cout << "The volume of a sphere with radius " << Radius << " is " \
			<< TotalVolume(Radius) << "." << endl;
	}

	return 0;
}

double TotalVolume(double Radius)
{
	return (4 * Pi * Radius * Radius * Radius) / 3;
}

double TotalVolume(double Radius, double Height)
{
	return Pi * Radius * Radius * Height;
}