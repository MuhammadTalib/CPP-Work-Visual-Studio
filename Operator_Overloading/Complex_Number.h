#include <iostream>
using namespace std;
class ComplexNumber{
    public:

        ComplexNumber()               //Null Constructor
        {
            this->Real=2;
            this->Imaginary=3;
        }
        ComplexNumber(float r,float i)       // Parametrized
        {
            this->Real=r;
            this->Imaginary=i;
        }
        ComplexNumber(ComplexNumber& Complex_Number)        //Copy
        {
            this->Real=Complex_Number.Real;
            this->Imaginary=Complex_Number.Imaginary;
        }
        void setReal(float Real)
        {
            this->Real=Real;
        }
        void setImaginary(float Imaginary)
        {
            this->Imaginary=Imaginary;
        }
        void set(float Real,float Imaginary)
        {
             this->Real=Real;
             this->Imaginary=Imaginary;
        }
        float getReal()
        {
            return this->Real;
        }
        float getImaginary()
        {
            return this->Imaginary;
        }
        ComplexNumber Add(ComplexNumber Z)      //Add
        {
            float Real=this->Real+Z.Real;
            float Imaginary=this->Imaginary+Z.Imaginary;
            Z.set(Real,Imaginary);
            return Z;
        }
        ComplexNumber operator+(ComplexNumber& Z)  // Add Operator Overloading
        {
            float Real=this->Real+Z.Real;
            float Imaginary=this->Imaginary+Z.Imaginary;
            Z.set(Real,Imaginary);
            return Z;
        }
        ComplexNumber operator=(ComplexNumber& Z1)
        {
          this->Real=Z1.Real;
          this->Imaginary=Z1.Imaginary;
          return *this;
        }
        

        void display()
        {
            cout<<endl<<"Real Part is "<< this->Real<<endl<<"Imaginary Part is"<<this->Imaginary<<endl;
        }
    private:
        float Real;
        float Imaginary;

};