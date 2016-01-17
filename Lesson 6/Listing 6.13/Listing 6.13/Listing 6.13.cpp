#include <iostream>
using namespace std;

int main()
{
	const int ARRAY1_LEN = 2;
	const int ARRAY2_LEN = 2;

	int MyInts1[ARRAY1_LEN] = { 1, 0};
	int MyInts2[ARRAY2_LEN] = { 1, 0};

	cout << "Multiplying each int in MyInts1 by each in MyInts2: " << endl;

	for (int Array1Index = 0; Array1Index < ARRAY1_LEN; ++Array1Index)
		for (int Array2Index = 0; Array2Index < ARRAY2_LEN; ++Array2Index)
			cout << MyInts1[Array1Index] << " x " << MyInts2[Array2Index] \
			<< " = " << MyInts1[Array1Index] * MyInts2[Array2Index] << endl;

	return 0;
}











