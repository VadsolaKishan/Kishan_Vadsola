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