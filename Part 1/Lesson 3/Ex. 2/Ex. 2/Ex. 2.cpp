#include <iostream>
using namespace std;

int main()
{
	cout << "Signed: "<< sizeof(int) << endl;
	cout << "Unsigned: " << sizeof(unsigned) << endl;

	if (sizeof(int) == sizeof(unsigned))
	{
		cout << "True!" << endl;
	}
	else
	{
		cout << "False!" << endl;
	}
    return 0;
}

