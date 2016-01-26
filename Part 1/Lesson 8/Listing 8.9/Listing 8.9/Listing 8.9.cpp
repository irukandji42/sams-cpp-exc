// Allocate dynamically based on need, 
// examine incrementing pointers with 
// offset values and operator ++

#include "iostream"
using namespace std;

int main()
{
	cout << "How many integers do you wish to enter? ";
	int InputNums = 0;
	cin >> InputNums;

	int* pNumbers = new int [InputNums]; // allocated requested integers
	int* pCopy = pNumbers;

	cout << "Successfully allocated memory for " << \
		InputNums << " integers" << endl;
	for (int Index = 0; Index < InputNums; ++Index)
	{
		cout << "Enter number " << Index << ": ";
		cin >> *(pNumbers + Index);
	}

	cout << "Displaying all numbers input: " << endl;
	for (int Index = 0, int* pCopy = pNumbers; Index < InputNums; ++Index) // Issues with this line.
		cout << *(pCopy++) << " ";

	cout << endl;

	// done with using the pointer? release memory
	delete[] pNumbers;

	return 0;
}

