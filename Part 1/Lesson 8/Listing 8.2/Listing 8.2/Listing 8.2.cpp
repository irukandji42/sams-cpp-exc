// Listing 8.1.cpp : Defines the entry point for the console application.
//

#include "iostream"
using namespace std;

int main()
{
	int Age = 30;
	int* pInteger = &Age; // pointer to an int, initialized to &Age

	//Displaying the value of pointer
	cout << "Integer Age is at(pINteger): 0x" << hex << pInteger << endl;
	cout << "Integer Age is at(&Age): 0x" << hex << &Age << endl;

	return 0;
}

