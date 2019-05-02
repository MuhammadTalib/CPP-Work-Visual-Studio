#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class student
{
public:

	student()
	{
		this->name = "";
		this->seat = "";
		for (int i = 0; i < 100; i++)
		{
			this->courselist[i] = "";
		}
		this->courseindex = 0;
		this->allcourses = " wqr";
	}
	student(string Name, string Seat)
	{
		this->name = Name;
		this->seat = Seat;
		for (int i = 0; i < 100; i++)
		{
			this->courselist[i] = "";
		}
		this->courseindex = 0;
	}
	student(student& CLONE)
	{
		this->name = CLONE.name;
		this->seat = CLONE.seat;
		for (int i = 0; i < 100; i++)
		{
			this->courselist[i] = CLONE.courselist[i];
		}

		this->courseindex = CLONE.courseindex;
	}
	void setname(string Name)
	{
		this->name = Name;
	}
	void setseat(string Seat)
	{
		this->seat = Seat;
	}
	void addcourse(string Newcourse)
	{
		this->courselist[courseindex] = Newcourse;
		this->courseindex++;
	}
	void setallcourses(string allcourse)
	{
		this->allcourses = allcourse;
	}
	string getname()
	{
		return this->name;
	}
	string getseat()
	{
		return this->seat;
	}
	string getcourse(int index)
	{
		index++;
		return this->courselist[index];
	}
	friend ostream& operator<<(ostream& o, student S)
	{
		int j = 49;
		for (int i = 0; i < S.courseindex; i++)
		{
			
			S.allcourses =S.allcourses +"Course "+(char)j+" is:"+ S.courselist[i];
			S.allcourses += '\n';
			j++;
		}
		return o << endl << "Name=" << S.name << endl << "Seat Number=" << S.seat << endl << S.allcourses;
		
	}

	void display()
	{
		cout << endl << "Name=" << this->name << endl << "Seat Number=" << this->seat << endl;
		for (int i = 0; i < this->courseindex; i++)
		{
			cout << "Course " << i + 1 << " is=" << this->courselist[i] << endl;
		}

	}


private:
	string name;
	string seat;
	string courselist[100];
	string allcourses;
	int courseindex;

}; 
