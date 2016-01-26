// Demonstrating the use of the dereference operator (*)
//to access integer values

#include "iostream"
using namespace std;

int main()
{
	int Age = 30;
	int DogsAge = 9;

	cout << "Integer Age = " << Age << endl;
	cout << "Integer DogsAge = " << DogsAge << endl;

	int* pInteger = &Age;
	cout << "pInteger points to Age" << endl;

	//Displyaing the value of pointer
	cout << "pInteger = 0x" << hex << pInteger << endl;

	//Displyaing the value of the pointed location
	cout << "*pInteger = " << dec << *pInteger << endl;

	pInteger = &DogsAge;
	cout << "pInteger points to DogsAge now" << endl;

	cout << "pInteger = 0x" << hex << pInteger << endl;
	cout << "*pInteger = " << dec << *pInteger << endl;

	return 0;
}

