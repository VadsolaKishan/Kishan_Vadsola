#include<iostream>
#include<vector>
using namespace std;

class Fuel
{
    string Fuel_Type;

    public:
    Fuel(string fuel_name)
    {
        Fuel_Type = fuel_name;
    }

    string Get_Fuel_Type()
    {
        return Fuel_Type;
    }
};

class Brand : private Fuel
{
    string Brand_Type;

    public:
    Brand(string fuel_name,string brand_name) : Fuel(fuel_name)
    {
        Brand_Type = brand_name;
    }
    
    string Get_Fuel_Type()
    {
        return Fuel::Get_Fuel_Type();
    }

    string Get_Brand_Type()
    {
        return Brand_Type;
    }
};

class Car : private Brand
{
    public:
    Car(string fuel_name,string brand_name) : Brand(fuel_name,brand_name)
    {  
    }
    void Display_Car_Details()
    {
        cout<<"Fuel Type : "<<Get_Fuel_Type()<<endl;
        cout<<"Brand Type : "<<Get_Brand_Type()<<endl;
    }

};

int main()
{
    vector<Car>cars;
    int n;
    cout<<"Enter The Number Of Cars : ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        string fuel_name,brand_name;
        cout<<"<-<-<-<-<-"<<"Car - "<<i+1<<" ->->->->->"<<endl;
        cout<<"Enter The Fuel Name : ";
        cin>>fuel_name;
        cout<<"Enter The Brand Name : ";
        cin>>brand_name;
        cout<<endl;

        Car C(fuel_name,brand_name);
        cars.push_back(C);
    }

    for(int i=0;i<n;i++)
    {
        cars[i].Display_Car_Details();
        cout<<endl;
    }
    cout<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";
}