#include<iostream>
#include<vector>
#define PI 3.14
using namespace std;

class Shape
{
    private:
    int radius;

    public:
    void Get_Radius()
    {
        cout<<endl<<"Enter The Radius : ";
        cin>>radius;
    }

    int Get_Radius_Value() 
    {
        return radius;
    }
};

class Circle : private Shape
{
    public:
    void Input_Radius()
    {
        Get_Radius();
    }

    void Area() 
    {
        float area = PI * Get_Radius_Value() * Get_Radius_Value();
        cout<<"Area of Circle is : "<<area<<endl<<endl;
    }
};


int main()
{
    vector<Circle>circles;
    int n;
    cout<<"Enter The Number Of Circles : ";
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"<-<-<-<-<-"<<"Circle - "<<i+1<<" ->->->->->";
        Circle C;
        C.Input_Radius();
        circles.push_back(C);
        circles[i].Area();
    }
    cout<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";
}
