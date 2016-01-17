#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	cout << "Find what days of the week are name after!" << endl;
	cout << "Enter a number for a day (Sunday = 0): ";

	int Day = Sunday; //Initialize to Sunday
	cin >> Day;

	switch (Day)
	{
	case Sunday:
		cout << "Sunday was name after the Sun" << endl;

	case Monday:
		cout << "Monday was name after the Moon" << endl;

	case Tuesday:
		cout << "Tuesday was name after the Mars" << endl;

	case Wednesday:
		cout << "Wednesday was name after the Mercury" << endl;

	case Thursday:
		cout << "Thursday was name after the Jupiter" << endl;

	case Friday:
		cout << "Friday was name after the Venus" << endl;

		break;

	case Saturday:
		cout << "Saturday name after the Saturn" << endl;

	default:
		cout << "Wrong input, execute again" << endl;
		break;
	}

	return 0;
}











