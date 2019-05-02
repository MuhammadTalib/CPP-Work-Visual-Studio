#include<iostream>
using namespace std;
int main()
{
	int V1[10] = { 0,1,2,3,4 }, V2[5] = { 5,6,7,8,9 };
	int *result = new int[10];
	
	copy(V1, V1, V1);
	copy(V2, V2+5 , V1 + 5);
	for (int i = 0; i < 10; i++)
	{
		cout << V1[i];
	}
	system("pause");
}