#include <iostream>
using namespace std;

class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imag;
       }

       // Operator overloading
       Complex operator - (Complex c2)
       {
           Complex sub;
           sub.real = real - c2.real;
           sub.imag = imag - c2.imag;

           return sub;
       }
       
       Complex operator + (Complex c2)
       {
       		Complex add;
       		add.real = real + c2.real;
       		add.imag = imag + c2.imag;
       		
       		return add;
	   }
	   
	   Complex operator * (Complex c2)
	   {
	   		Complex multi;
	   		multi.real = real * c2.real - imag * c2.imag;
	   		multi.imag = real * c2.imag + imag * c2.real;
	   		
	   		return multi;
	   }
	   
	   Complex operator / (Complex c2)
	   {
	   		Complex div;
	   		double w;
         	w=c2.real * c2.real + c2.imag * c2.imag;
         	if(w>0)
         	{
         		div.real = (real * c2.real + imag * c2.imag)/w;
				div.imag = (c2.real * imag - real * c2.imag)/w;
				return div;
			}
			
			else
			{
				cout << "function error";
			}
	   }

       void output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};

int main()
{
    Complex c1, c2, subtraction, addition, multiplication, division;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    // In case of operator overloading of binary operators in C++ programming, 
    // the object on right hand side of operator is always assumed as argument by compiler.
    subtraction = c1 - c2;
    subtraction.output();
    cout << "\n";
    addition = c1 + c2;
    addition.output();
    cout << "\n";
    multiplication = c1 * c2;
    multiplication.output();
    cout << "\n";
    division = c1 / c2;
    division.output();

    return 0;
}
