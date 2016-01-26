#include <iostream>
using namespace std;

int main()
{
	cout << "Input a Boolean value: ";
	bool Value1 = false;
	cin >> Value1;

	cout << "Input another Boolean value: ";
	bool Value2 = false;
	cin >> Value2;
	
	cout << "Bitwise OR: " << (Value1 | Value2) << endl;

	return 0;
}