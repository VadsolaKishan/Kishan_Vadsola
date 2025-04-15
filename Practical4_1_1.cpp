#include<iostream>
#include<vector>
using namespace std;
#define PI 3.14

class Shape
{
    protected:
    int radius;

    public: 
    void Get_Radius()
    {
        cout<<endl<<"Enter The Radius : ";
        cin>>radius;
    }
};

class Circle : public Shape
{
    public:

    void Area()
    {
        float area = PI * radius * radius;
        cout<<"Area of Circle is : "<<area<<endl<<endl;
    }

};

int main()
{
   vector<Circle>circles;
   int n;
   cout<<"Enter The Number Of Circles : ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
        cout<<"<-<-<-<-<-"<<"Circle - "<<i+1<<" ->->->->->";
        Circle C;
        C.Get_Radius();
        circles.push_back(C);
        circles[i].Area();
   }

   cout<<"Name : Vadsola Kishan"<<endl;
   cout<<"Id : 24CE134";
}
