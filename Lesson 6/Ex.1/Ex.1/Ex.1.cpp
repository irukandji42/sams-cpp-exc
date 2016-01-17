#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int Array[ARRAY_LENGTH] = { 0, 1, 2, 3, 4};

	for (int ArrayIndex = ARRAY_LENGTH - 1; ArrayIndex >= 0; ArrayIndex--)
	{
		cout << Array[ArrayIndex] << endl;
	}

	return 0;
}











