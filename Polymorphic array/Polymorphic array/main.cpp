#include <iostream>
using namespace std;

class animal {
public:
	virtual void print() { cout << "is animal"; }

};

class cat:public animal {
public:
	void print() { cout << "is cat"; }

};
class Polymorphic_Array_OF_animals 
{

public:

	Polymorphic_Array_OF_animals()
	{
		this->total_animals = 6;
		this->count = 0;
		this->Array[this->total_animals];
	}
	void addanimal(animal *P)
	{
		if (this->count < 6)
		{
			this->Array[this->count] = P;
			this->count++;
		}
	}
	
	void print()
	{
		for (int i = 0; i < this->count; i++)
		{
			this->Array[i]->print();
		}
	}
private:

	int total_animals = 6;
	int count;
	animal *Array[];
};

int main()
{

	animal *creature = new cat;
	Polymorphic_Array_OF_animals A;
	A.addanimal(creature);
	A.print();

	system("pause");

}