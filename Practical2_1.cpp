#include<iostream>
using namespace std;

class Rectangle
{
    int Length;
    int Width;
    
    public:
    void Set_Dimension(int L,int W)
    {
        Length = L;
        Width = W;
    }

    int Area()
    {
        return Length * Width;
    }

    int Perimeter()
    {
        return 2 * (Length + Width);
    }
};


int main()
{
Rectangle r1,r2,r3;

r1.Set_Dimension(5,6);
r2.Set_Dimension(8,9);
r3.Set_Dimension(9,15);

cout<<"Area R1 : "<<r1.Area()<<" "<<"Perimeter R1 : "<<r1.Perimeter()<<endl;
cout<<"Area R2 : "<<r2.Area()<<" "<<"Perimeter R2 : "<<r2.Perimeter()<<endl;
cout<<"Area R3 : "<<r3.Area()<<" "<<"Perimeter R3 : "<<r3.Perimeter()<<endl;

cout<<endl<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}