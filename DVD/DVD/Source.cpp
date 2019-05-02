#include <iostream>
#include<string>
#include<string.h>
#include"DVD.h"
#include"DVDCollection.h"
using namespace std;
int main()
{
	DVDCollection Softwares;
	DVD Microsoft("Windows", "Microsoft", 100, 2);
	DVD Movie("Pari", "Bollywood", 100, 350);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.Add(Movie);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.Add(Movie);
	Softwares.Add(Microsoft);
	Softwares.Add(Movie);
	Softwares.find("Windows");
	Softwares.Delete("Windows");
	Softwares.display();



	system("pause");
}