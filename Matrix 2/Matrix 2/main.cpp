#include<iostream>
using namespace std;
#include"Matrix.h"
int main()
{
	matrix A(3,3);
	matrix B(3,3);
	matrix C(B);
	matrix D;
	B.setelements();
	
	cout << endl << "A" <<endl<< A;
	cout << endl << "B" <<endl<< B;

	int arr[10];
	B.det(-1,arr);

	system("pause");
}