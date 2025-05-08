/* A mathematical research group aimed to create a software model for handling and performing 
operations on complex numbers efficiently. To achieve this, they designed a Complex class that 
encapsulates the real and imaginary parts of a complex number. The class supports essential operator 
overloading to enhance usability, including the addition and subtraction of complex numbers and 
custom input and output functionality through the << and >> operators. These overloaded operators 
ensure seamless arithmetic and user interaction with the system. 
The task involves implementing this system and exploring its capabilities by performing various 
operations on complex numbers. Participants are expected to overload the specified operators and 
use them to add and subtract complex numbers, as well as to facilitate user-friendly input and output. 
Additionally, the solution encourages experimenting with managing collections of complex numbers 
to perform batch operations. */
    
#include<iostream>
using namespace std;

class Complex
{
    double IMAG;
    double REAL;

    public:

    void Insert_Data()
    {
        cout<<"Enter The Real Part : ";
        cin>>REAL;
        cout<<"Enter The Imaginary Part : ";
        cin>>IMAG;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.REAL = REAL + c.REAL;
        temp.IMAG = IMAG + c.IMAG;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.REAL = REAL - c.REAL;
        temp.IMAG = IMAG - c.IMAG;
        return temp;
    }

    void Display(int a)
    {
        if(a == 1)
        {
            cout<<"Addition Of Complex Number : "<<REAL<<" + "<<IMAG<<"i"<<endl;
        }
        else
        {
            cout<<"Subtraction Of Complex Number : "<<REAL<<" + "<<IMAG<<"i"<<endl;
        }
    }
};

int main()
{
    Complex c1,c2,c3;
    int n;

    cout<<"Enter The First Complex Numbers"<<endl;
    c1.Insert_Data();
    cout<<"Enter The Second Complex Numbers"<<endl;
    c2.Insert_Data(); 

    c3 = c1 + c2;
    c3.Display(1);

    c3 = c1 - c2;
    c3.Display(2);
}
