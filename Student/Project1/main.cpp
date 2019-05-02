#include<iostream>
using namespace std;
#include "Student.h"
int main()
{
	student Y;
	student Talib;
	Talib.setname("Muhammad Talib Waseem");
	Talib.setseat("B16101116");
	for (int l = 0; l < 6; l++)
	{
		string name;
		cout << "Enter Course " << l + 1 << "=";
		cin >> name;
		cout << endl;
		Talib.addcourse(name);
	}
	cout << Talib.getcourse(2);
	Y = Talib;
	cout << Talib;
	cout << Y;

	system("pause");
}