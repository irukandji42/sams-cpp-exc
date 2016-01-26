//Write a function that accepts an array of double as input.

#include <iostream>
using namespace std;







int main()
{
	//cout << "Length of array: ";
	//int Length = 0;
	//cin >> Length;
	
	double MyArray[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> MyArray[i];
	}

	ArrayDisplay()

	return 0;
}

