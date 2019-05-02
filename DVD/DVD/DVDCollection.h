#define NULL 0;
class DVDCollection {
public:
	DVDCollection()
	{
		this->maximumdvds = 5;
		this->dvdlist = new DVD[this->maximumdvds];
		this->totaldvds = 0;
	}
	DVDCollection(DVDCollection& list)
	{
		this->maximumdvds = list.maximumdvds;
		this->totaldvds = list.totaldvds;
		this->dvdlist = list.dvdlist;
	}
	DVDCollection(int totaldvds,DVD *array,int maxdvds)
	{
		this->dvdlist = new DVD[maxdvds];
		this->maximumdvds = maxdvds;
		this->totaldvds = totaldvds;
		for (int i = 0; i < this->totaldvds; i++)
		{
			this->dvdlist[i]=array[i];
		}
		delete[] array;
	}
	
	void Add(DVD& CD)
	{
		if (totaldvds >= maximumdvds)
		{
			*this = this->increasesize();
		}
		this->dvdlist[this->totaldvds] = CD;
		this->totaldvds++;
	}
	
	int find(string name)
	{
		DVD D;
		int j = 0, k = 0;;
		for (int i = 0; i < this->totaldvds; i++)
		{
			D = this->dvdlist[i];
			if (D.getname() == name)
			{
				j++;
				k=i;
			}
		}
		if (j == 0)
		{
			cout << endl << "Not Found";
			return 0;
		}
		else
		{
			cout << endl << "Found " << j << " times" ;
			return k;
		}
	}
	void Delete(string name)
	{
		int j = this->find(name);
		if (j!=0)
		{
			for (int i = j; i < this->totaldvds-1; i++)
			{
				this->dvdlist[i]=this->dvdlist[i + 1];
			}
			this->totaldvds--;
		}
		cout <<'\r'<<"                              "<<'\r';
	}
	void display()
	{
		DVD D;
		for (int i = 0; i < totaldvds; i++)
		{
			cout << i+1<<endl;
			D=this->dvdlist[i];
			D.display();
		}
	}

private:
	DVD * dvdlist;
	int totaldvds;
	int maximumdvds;
	DVDCollection increasesize()
	{
		this->maximumdvds = this->maximumdvds * 2;
		DVDCollection cdlist(this->totaldvds, this->dvdlist, this->maximumdvds);
		return cdlist;
	}
};