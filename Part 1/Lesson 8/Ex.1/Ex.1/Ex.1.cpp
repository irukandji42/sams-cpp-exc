#include <iostream>
using namespace std;

int main()
{
	int Number = 3;
	int* pNum1 = &Number;
	*pNum1 = 20;
	int* pNum2 = pNum1;
	Number *= 2;
	cout << *pNum2;

	return 0;
}