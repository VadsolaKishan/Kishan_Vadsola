#include<iostream>
using namespace std;

int Super_Digit(int n)
{
    if(n<10)
    {
        cout<<"Super Digit : "<<n<<endl;
        return n;
    }
    else
    {
        int Sum = 0;
        while(n>0)
        {
            Sum += n % 10;
            n = n / 10;
        }
        Super_Digit(Sum);
    }

}


int main()
{
    string n;
    int k;

    cout<<"Enter The Number : ";
    cin>>n;
    cout<<"Enter The Number Of Repatation : ";
    cin>>k;

    int Sum = 0;

    for(int i=0;i<n.length();i++)
    {
        Sum += n[i] - '0';
    }
   
    Sum = Sum * k;

    Super_Digit(Sum);

    cout<<endl<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";
}