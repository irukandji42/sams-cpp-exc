#include <iostream>
using namespace std;

//three global variable integers
int FirstNumber = 0;
int SecondNumber = 0;
int MultiplicationResult = 0;

void MultiplyNumbers()
{
	cout << "Enter the first number: ";
	cin >> FirstNumber;
	
	cout << "Enter the second number: ";
	cin >> SecondNumber;

	//Multiply two numbers, store result in a variable
	MultiplicationResult = FirstNumber * SecondNumber;

	//Display Results
	cout << "Displaying from MultiplyNumbers(): ";
	cout << FirstNumber << " x " << SecondNumber;
	cout << " = " << MultiplicationResult << endl;
}

int main()
{
	cout << "This program will help you multiply two numbers" << endl;

	//Call the function that does all the work
	MultiplyNumbers();

	cout << "Displaying from main(): ";

	//This line will now compile and work
	cout << FirstNumber << " x " << SecondNumber;
	cout << " = " << MultiplicationResult << endl;

	return 0;
}

