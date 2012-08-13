#include <iostream>

using namespace std;

bool call(bool flag)
{
	bool flag2 = false;
	flag2 = flag;
	return flag2;
}

void main()
{
	bool flag = true;

	cout << "Console test\n~~~~~~~~~~~~\n\n";

	cout << call(flag) << "\n";

	cout << "Presss ENTER to continue\n";
	cin.ignore(1);
}