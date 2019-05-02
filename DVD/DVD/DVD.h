#include <iostream>
#include<string>
#include<string.h>
using namespace std;
class DVD
{
public:
	DVD()
	{
		this->name="";
		this->companyname="";
		this->cost=0;
		this->size=0;
	}
	DVD(string name,string companyname,int cost,int size)
	{
		this->name = name;
		this->companyname = companyname;
		this->cost = cost;
		this->size = size;
	}
	DVD(DVD& myCD)
	{
		this->name =myCD.name;
		this->companyname = myCD.companyname;
		this->cost = myCD.cost;
		this->size = myCD.size;
	}
	void setname(string name)
	{
		this->name = name;
	}
	void setcompanyname(string companyname)
	{
		
		this->companyname = companyname;
	}
	void setcost(int cost)
	{
		this->cost = cost;
	}
	void setsize(int size)
	{
		
		this->size = size;
	}
	string getname()
	{
		return this->name;
	}
	void display()
	{
		cout << "Name=" << this->name << endl << "Company Name=" << this->companyname << endl << "Cost=" << this->cost << endl << "Memory Size=" << this->size<< endl << endl;
	}
private:
	string name;
	string companyname;
	int cost;
	int size;
};
