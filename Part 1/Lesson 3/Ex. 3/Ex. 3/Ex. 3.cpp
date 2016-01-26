#include <iostream>
using namespace std;
const double Pi = 3.14159;


int main()
{
	float Radius = 0;

	cout << "Enter a value for the radius: " << endl;
	cin >> Radius;

	float Area = Pi*Radius*Radius;
	float Circumference = 2*Pi*Radius;

	cout << "A circle with the a radius of " << Radius << " has an area of "
		<< Area << " and a circumference of " << Circumference << "." << endl;

    return 0;
}

