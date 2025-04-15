#include <iostream>
using namespace std;

struct Product 
{
    int Id;
    string Name;
    int Quantity;
    double Price;

void Add_Product(int P_I,string P_N,int P_Q,double P_P) 
{
    Id = P_I;
    Name = P_N;
    Quantity = P_Q;
    Price = P_P;

    cout<<"Id : "<<Id<<endl;
    cout<<"Name : "<<Name<<endl;
    cout<<"Quantity : "<<Quantity<<endl;
    cout<<"Price : "<<Price<<endl<<endl;
}

void Update_Quantity(int U_Q,int a) 
{
    Quantity += U_Q;
    cout<<"Update Quantity "<<a<<" : "<<U_Q<<endl;
}


void Total_Price(int a) 
{
    double total = Quantity * Price;
    cout<<"Total Price "<<a<<" : "<<total<<endl;
    }
    
};

int main() 
{
Product P_1, P_2;

cout<<"<-<-<-<-<-Product 1 Detail->->->->->"<<endl<<endl;
P_1.Add_Product(1,"Laptop",2,50000);

cout<<"<-<-<-<-<-Product 2 Detail->->->->->"<<endl<<endl;
P_2.Add_Product(2,"Phone",3, 20000);

cout<<"------------------------------------"<<endl<<endl;
P_1.Update_Quantity(3,1);
P_2.Update_Quantity(2,2);

P_1.Total_Price(1);
P_2.Total_Price(2);

cout<<endl<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}
