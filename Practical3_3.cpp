#include<iostream>
#include<vector>
using namespace std;

class Bank_Account
{
    public:
    string Account_Name;
    string Account_Number;
    double Account_Balance;
    static int count;

    Bank_Account(string A_Name,string A_Number,double A_Balance)
    {
        Account_Name = A_Name;
        Account_Number = A_Number;
        Account_Balance = A_Balance;
        count++;
    }

    void Detail()
    {
        cout<<"Account Name : "<<Account_Name<<endl;
        cout<<"Account Number : "<<Account_Number<<endl;
        cout<<"Account Balance : "<<Account_Balance<<endl<<endl;
    }

    
    int Deposite(double d)
    {
        Account_Balance += d;
        cout<<"Deposited In Account 1 : "<<Account_Balance<<endl;
    }
    
    int Withdraw(double w)
    {
        if(Account_Balance > w)
        {
            Account_Balance -= w;
            cout<<"Withdrawed In Account 2 : "<<Account_Balance<<endl<<endl;
        }
        else
        {
            cout<<"Not Sufficient Balance."<<endl<<"---------------------------------"<<endl<<endl;
        }
    }
    
    void Display_Detail()
    {
        cout<<"Account Name : "<<Account_Name<<endl;
        cout<<"Account Number : "<<Account_Number<<endl;
        cout<<"Account Total Balance : "<<Account_Balance<<endl<<endl;
    }
};

int Bank_Account::count = 0;

void transfer_money(Bank_Account& account_1,Bank_Account& account_2,double amount)
{
    account_1.Account_Balance -= amount;
    account_2.Account_Balance += amount;
    
    cout<<"Transferred "<<amount<<" From Account 1 To Account 2"<<endl;
    cout<<"Deposited In Account 2 : "<<account_2.Account_Balance<<endl<<endl;
}

int main()
{

    Bank_Account account_1("Kishan","1234567890",500.0);
    Bank_Account account_2("Abhishek","9876543210",200.0);
    
    cout<<"<-<-<-<-<- Account 1 Details ->->->->->"<<endl<<endl;
    account_1.Detail();
    cout<<"<-<-<-<-<- Account 2 Details ->->->->->"<<endl<<endl;
    account_2.Detail();

    account_1.Deposite(200.0);
    account_2.Withdraw(100.0);

    transfer_money(account_1,account_2,200.0);

    cout<<"<-<-<-<-<- Account 1 ->->->->->"<<endl<<endl;
    account_1.Display_Detail();
    cout<<"<-<-<-<-<- Account 2 ->->->->->"<<endl<<endl;
    account_2.Display_Detail();

    cout<<"Total Account Created : "<<Bank_Account::count;
    
    cout<<endl<<endl<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";

}