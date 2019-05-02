#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 
using namespace std;

int main() {

	string filename;
	cout << "Please enter a file name to write: ";
	getline(cin, filename);
	
	ofstream myfile(filename);
	if (myfile.is_open())
	{
		int x = 103,y=100;
		myfile << x;
		myfile << endl;
		myfile << y;
		myfile << "This is another line.\n";
		myfile.close();
	}
	else cout << "Unable to open fileee";

	int linee;
	string line;
	ifstream myfil(filename);
	if (myfil.is_open())
	{
		while (getline(myfil, line))
		{
			stringstream geek(line);
			geek>>linee;
			cout << linee+57 << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";
	system("pause");

}



