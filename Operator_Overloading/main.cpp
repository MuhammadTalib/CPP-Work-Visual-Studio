#include <iostream>
using namespace std;
#include "Complex_Number.h"
int main()
{
    ComplexNumber Z1(4,4);
    ComplexNumber Z2(Z1);
    ComplexNumber Z3;
    ComplexNumber Z4;
    Z1=Z2;
    Z3.display();
    Z1.display();
    
    Z4=Z1+Z2; //ADD FUNCTION OVERLOADED
    Z4.display();
    Z2.display();

    system("pause");
}
