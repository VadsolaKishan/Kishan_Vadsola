#include<iostream>
using namespace std;

class Inventory_Item
{
    public:
    int Item_Id;
    string Item_Name;
    double Item_Price;
    int Item_Quantity;

    Inventory_Item()
    {
        Item_Name = "Phone";
        Item_Id = 145;
        Item_Price = 25000;
        Item_Quantity = 20;
    }

    Inventory_Item(string I_Name,int I_Id,double I_Price,int I_Quantity)
    {
        Item_Name = I_Name;
        Item_Id = I_Id;
        Item_Price = I_Price;
        Item_Quantity = I_Quantity;
    }

    int Item_Detail()
    {
        cout<<"Item Name : "<<Item_Name<<endl;
        cout<<"Item Id : "<<Item_Id<<endl;
        cout<<"Item Price : $"<<Item_Price<<endl;
        cout<<"Item Quantity : "<<Item_Quantity<<endl<<endl;
    }

    int Item_Add_Stock(int I_A_Stock,int I_Number)
    {
        Item_Quantity += I_A_Stock;
        cout<<"Add Quantity Item_"<<I_Number<<" : "<<I_A_Stock<<endl;
    }

    int Item_Sell(int I_Sell,int I_Number)
    {
        Item_Quantity -= I_Sell;
        cout<<"Sell Item_"<<I_Number<<" : "<<I_Sell<<endl<<endl;
    }

    int Item_Update()
    {
        cout<<"Item Name : "<<Item_Name<<endl;
        cout<<"Item Id : "<<Item_Id<<endl;
        cout<<"Item Price : $"<<Item_Price<<endl;
        cout<<"Item Quantity : "<<Item_Quantity<<endl<<endl;
    }
};


int main()
{
Inventory_Item Item[3];

Item[0] = Inventory_Item("Laptop",134,50000,10);
Item[1] = Inventory_Item("T_V",124,100000,15);
Item[2] = Inventory_Item();

for(int i=0;i<3;i++)
{
    cout<<"<-<-<-<-<-<-<- Item-"<<(i+1)<<"-Detail ->->->->->->->"<<endl;
    Item[i].Item_Detail();
}
    Item[0].Item_Add_Stock(5,1);
    Item[0].Item_Sell(10,1);

    Item[1].Item_Add_Stock(10,2);
    Item[1].Item_Sell(5,2);

    Item[2].Item_Add_Stock(5,3);
    Item[2].Item_Sell(5,3);

cout<<"Update Inventary."<<endl<<endl;

for(int i=0;i<3;i++)
{
    Item[i].Item_Update();
}

cout<<endl<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}