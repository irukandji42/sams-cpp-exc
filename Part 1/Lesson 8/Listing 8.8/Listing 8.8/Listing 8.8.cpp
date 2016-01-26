// Allocating using new[...] and releasing it using delete[]

#pragma warning(disable:4996)
#include "iostream"
#include <string>
using namespace std;

int main()
{
	cout << "Enter your name: ";
	string Name;
	cin >> Name;

	// Add 1 to reserve space for a terminating null
	int CharsToAllocate = Name.length() + 1;

	//request for memory to hold copy of input
	char* CopyOfName = new char[CharsToAllocate];

	// strcopy copies from a null-terminated string
	strcpy(CopyOfName, Name.c_str()); //strcpy only works when I disable warning:4996 (Deprecated)

	// Display the copied string 
	cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;

	// Done using buffer? Delete
	delete[] CopyOfName;

	return 0;
}

