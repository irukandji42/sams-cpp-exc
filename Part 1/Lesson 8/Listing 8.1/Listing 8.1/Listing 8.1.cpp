// Listing 8.1.cpp : Defines the entry point for the console application.
//

#include "iostream"
using namespace std;

int main()
{
	int Age = 30;
	const double Pi = 3.14159;

	//Use & to find the address in memory
	cout << "Integer Age is at: 0x" << hex << &Age << endl;
	cout << "Double Pi is located at: 0x" << hex << &Pi << endl;

    return 0;
}

