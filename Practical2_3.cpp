#include<iostream>
using namespace std;

class Bank_Account
{
    public:
    string Account_Name;
    string Account_Number;
    double Account_Balance;

    Bank_Account()
    {
        Account_Name = "Unknow";
        Account_Number = "0";
        Account_Balance = 0;
    }

    Bank_Account(string A_Name,string A_Number,double A_Balance)
    {
        Account_Name = A_Name;
        Account_Number = A_Number;
        Account_Balance = A_Balance;
    }

    int Detail()
    {
        cout<<"Account Name : "<<Account_Name<<endl;
        cout<<"Account Number : "<<Account_Number<<endl;
        cout<<"Account Balance : $"<<Account_Balance<<endl;      
    }

    int Deposite(double d)
    {
        Account_Balance += d;
        cout<<"Deposite : "<<d<<endl;
    }

    int Withdraw(double w)
    {
        if(Account_Balance > w)
        {
            Account_Balance -= w;
            cout<<"Withdraw : "<<w<<endl;
        }
        else
        {
            cout<<"Not Sufficient Balance."<<endl<<"---------------------------------"<<endl;
        }
    }

    int Display()
    {
        cout<<"---------------------------------"<<endl;
        cout<<"Total Balance : $"<<Account_Balance<<endl<<"---------------------------------"<<endl<<endl;
    }
};


int main()
{
Bank_Account Account_1;
Bank_Account Account_2("Vadsola Kishan","7429492234",50000);

cout<<"<-<-<-<-<- Account 1 Detail ->->->->->"<<endl<<endl;
Account_1.Detail();
Account_1.Deposite(1000);
Account_1.Withdraw(500);
Account_1.Display();

cout<<"<-<-<-<-<- Account 2 Detail ->->->->->"<<endl<<endl;
Account_2.Detail();
Account_2.Deposite(5000);
Account_2.Withdraw(10000);
Account_2.Display();

cout<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}