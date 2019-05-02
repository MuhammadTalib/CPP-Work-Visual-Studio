#include<iostream>
#include<string>
#include<string.h>
#include<stack>
using namespace std;
class matrix
{
public:
	matrix()
	{
		this->row = 2;
		this->column = 2;
		this->allarray = " ";
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				this->Matrix[i][j] = 0;
			}
		}
	}
	matrix(int r,int c)
	{
		this->row = r;
		this->column = c;
		for (int i=0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				this->Matrix[i][j] = 1;
			}
		}
	}
	matrix(matrix& x)
	{
		this->row = x.row;
		this->column = x.column;
		for (int i=0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				this->Matrix[i][j] = x.Matrix[i][j];
			}
		}
	}
	void setelements()
	{
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				int k;
				cin >> k;
				this->Matrix[i][j] = k;
			}
		}
		cout << endl;
	}
	void setelement0()
	{
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				this->Matrix[i][j] = 0;
			}
		}
	}
	friend void operator <<  (ostream& o,matrix A)
	{
		for (int i = 0; i < A.row; i++)
		{
			for (int j = 0; j < A.column; j++)
			{
				cout << A.Matrix[i][j] << "  ";
			}
			cout << endl;
		}
	}
	matrix& operator = (matrix A)
	{
		this->row = A.row;
		this->column = A.column;
		for (int i = 0; i < A.row; i++)
		{
			for (int j = 0; j < A.column; j++)
			{
				this->Matrix[i][j] = A.Matrix[i][j];
			}
		}
		return *this;
	}
	matrix& operator+(matrix A)
	{
		if (this->row == A.row && this->column == A.column)
		{
			for (int i = 0; i < A.row; i++)
			{
				for (int j = 0; j < A.column; j++)
				{
					this->Matrix[i][j] = this->Matrix[i][j] + A.Matrix[i][j];
				}
			}
		}
		else
		{
			cout << endl << "No Possible Solution Exist"<<endl;
		}
		return *this;
	}
	matrix& Add(matrix& A)
	{
		if (this->row == A.row && this->column == A.column)
		{
			for (int i = 0; i < A.row; i++)
			{
				for (int j = 0; j < A.column; j++)
				{
					this->Matrix[i][j] = this->Matrix[i][j] + A.Matrix[i][j];
				}
			}
		}
		else
		{
			cout << endl << "No Possible Solution Exist"<<endl;
		}
		return *this;
	}
	matrix& operator-(matrix& A)
	{
		if (this->row == A.row && this->column == A.column)
		{
			for (int i = 0; i < A.row; i++)
			{
				for (int j = 0; j < A.column; j++)
				{
					this->Matrix[i][j] = this->Matrix[i][j] - A.Matrix[i][j];
				}
			}
		}
		else
		{
			cout << endl << "No Possible Solution Exist"<<endl;
		}
		return *this;
	}
	
	matrix& operator*(matrix& A)
	{
		if (this->row == this->column)
		{
			matrix mult(this->row, A.column);
			mult.setelement0();

			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < A.column; j++)
				{

					for (int k = 0; k < this->column; ++k)
					{
						mult.Matrix[i][j] += (this->Matrix[i][k] * A.Matrix[k][j]);
					}
				}
			}
			A = mult;
		}
		else
		{
			cout << endl << "No Possible Solution Exist"<<endl;
		}
		return A ;
	}
	matrix& Transpose()
	{
		matrix B(this->column,this->row);
		for (int i = 0; i <this->column; i++)
		{
			for (int j = 0; j <this->row; j++)
			{
				B.Matrix[j][i] = this->Matrix[i][j];
			}
		}
		*this = B;;
		return *this;

	}
	stack <int> s;
	int arr[10];

	int sum = 0,x=0;
	int det(int arrayindex,int *arr)
	{
		matrix A(this->row - 1, this->column - 1);
		if (this->row == 1 && this->column == 1)
		{
			int a = arr[arrayindex];
			arrayindex--;
			sum = a*this->Matrix[0][0];
			cout << "sum"<<sum;
			return sum;
		}
		else
		{
			for (int n = 0; n < this->row; n++)
			{
				arrayindex++;
				int m = 0;
				arr[arrayindex] = this->Matrix[0][n];
				cout << "Arr[n]=" << arr[arrayindex];
				for (int i = 1; i < this->row; i++)
				{
					m = 0;
					for (int j = 0; j < this->column; j++)
					{


						if (n != j)
						{
							if (i - 1 == 0 && m == 1)

							{
								A.Matrix[i - 1][m] = (-1)*this->Matrix[i][j];
								m++;
							}
							else
							{
								A.Matrix[i - 1][m] = this->Matrix[i][j];
								m++;
							}
						}

					}
				}
				A.display();
				int c = A.det(arrayindex, arr);
				x= this->Matrix[0][n] *(x+c);
				cout <<"|"<< this->Matrix[0][n] <<"|"<< c<<"|";
				cout << "x is" << x << "  arrayindex=" << arr[arrayindex];
			}
		}
		return x;
	}
	void showstack(stack <int> gq)
{
        cout << '\t' << gq.top();
        gq.pop();
}
 
	void display()
	{
		cout << endl << "Number of Rows=" << this->row << "  Number of Column=" << this->column<<endl<<"Matrix is"<<endl;
		for (int i = 0; i < this->row; i++)
		{
			for (int j = 0; j < this->column; j++)
			{
				cout << this->Matrix[i][j] << "  ";
			}
			cout << endl;
		}
	}
	


private:
	int Matrix[100][100];
	int row;
	int column;
	string allarray;
};
