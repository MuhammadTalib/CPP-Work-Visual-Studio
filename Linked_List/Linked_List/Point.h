#pragma once
#include"Node.h"
class point:public Node
{
public:
	point()
	{
		this->x = 0;
		this->y = 0;
	}
	point(int x,int y):Node()
	{
		this->x = x;
		this->y = y;
	}
	void set(void* x, void* y)
	{
		this->x =(int)x;
		this->y =(int) y;
	}
	void display()
	{
		cout << this->x <<endl;
		cout << this->y << endl;
	}
	
	

private:
	int x;
	int y;


};