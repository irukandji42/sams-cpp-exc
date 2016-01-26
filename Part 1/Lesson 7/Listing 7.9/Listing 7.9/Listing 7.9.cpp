//Fetching the Area of a Circle as a Reference Parameter and Not as a Return Value

#include <iostream>
using namespace std;

const double Pi = 3.1416;

//output paramteter Result by a reference
void Area(double Radius, double& Result)
{
	Result = Pi * Radius * Radius;
}

int main()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;

	double AreaFetched = 0;
	Area(Radius, AreaFetched);

	cout << "The area is: " << AreaFetched << endl;

	return 0;
}