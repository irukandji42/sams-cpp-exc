//Write a function with return type void
//that still helps the caller calculate
//the area and circumference of a circle
//when supplied the radius.

#include <iostream>
using namespace std;

const double Pi = 3.14159;

//Void Function
void Area(double Radius, double& ResultArea);
void Circumference(double Radius, double& ResultCircumference);

int main()
{
	cout << "Enter Radius: ";
	double Radius = 0;
	cin >> Radius;

	double ResultArea = 0;
	Area(Radius, ResultArea);
	cout << "Area: " << ResultArea << endl;

	double ResultCircumference = 0;
	Circumference(Radius, ResultCircumference);
	cout << "Circumference: " << ResultCircumference << endl;

	return 0;
}

void Area(double Radius, double& ResultArea)
{
	ResultArea = Pi * Radius * Radius;
}

void Circumference(double Radius, double& ResultCircumference)
{
	ResultCircumference = Pi * 2 * Radius;
}