// Number adding test
#include <iostream>
using namespace std;

int AddingFunction(int User)
{
	int length = User;
	int Num = 0;
	int Sum = 0;

	for (int i = 1, j = length - 1; i < length; i++, j--)
	{
		int Num = i*j;
		Sum = Sum + Num;
	}

	return Sum;
}

int main()
{
	cout << "Enter Number: ";
	int UserNumber = 0;
	cin >> UserNumber;

	cout << "Added is: " << AddingFunction(UserNumber) << endl;

	return 0;
}