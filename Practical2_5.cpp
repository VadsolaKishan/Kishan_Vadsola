#include<iostream>
#include<math.h>
using namespace std;

class Loan
{
    public:

    int Loan_Id;
    string Applicant_Name;
    float Loan_Amount;
    float Loan_Interest_Rate;
    int Loan_Term;

    Loan()
    {
        Loan_Id = 0;
        Applicant_Name = "N/A";
        Loan_Amount = 0.0;
        Loan_Interest_Rate = 0.0;
        Loan_Term = 0;
    }

    Loan(int L_Id,string A_Name,float L_Amount,float L_Interest_Rate,int L_Term)
    {
        Loan_Id = L_Id;
        Applicant_Name = A_Name;
        Loan_Amount = L_Amount;
        Loan_Interest_Rate = L_Interest_Rate;
        Loan_Term = L_Term;
    }

    int Display_Loan_Detail()
    {
        cout<<"Loan Id : "<<Loan_Id<<endl;
        cout<<"Applicant Name : "<<Applicant_Name<<endl;
        cout<<"Loan Amount : "<<Loan_Amount<<endl;
        cout<<"Loan Interest Rate : "<<Loan_Interest_Rate<<"%"<<endl;
        cout<<"Loan Term : "<<Loan_Term<<endl;
    }

    int Calculate_EMI()
    {
        float Monthly_I_R = (Loan_Interest_Rate / 12) / 100;
    
        float EMI = Loan_Amount * Monthly_I_R * pow(1 + Monthly_I_R,Loan_Term) / (pow(1 + Monthly_I_R,Loan_Term)-1);
        cout<<"--------------------------------"<<endl;
        cout<<"Monthly EMI : "<<EMI<<endl;
    }
};



int main()
{
int Loan_Id;
string Applicant_Name;
float Loan_Amount;
float Loan_Interest_Rate;
int Loan_Term;

cout<<"Loan Id : ";
cin>>Loan_Id;

cin.ignore();

cout<<"Applicant Name : ";
getline(cin,Applicant_Name);

cout<<"Loan Amount : ";
cin>>Loan_Amount;

cout<<"Loan Interest Rate : ";
cin>>Loan_Interest_Rate;


cout<<"Loan Term (In Months) : ";
cin>>Loan_Term;

Loan L1(Loan_Id,Applicant_Name,Loan_Amount,Loan_Interest_Rate,Loan_Term);
cout<<endl<<"<-<-<-<-<-Loan Details->->->->->"<<endl<<endl;
L1.Display_Loan_Detail();
L1.Calculate_EMI();

Loan L2;
cout<<endl<<"<-<-<-<-<-Loan Details->->->->->"<<endl<<endl;
L2.Display_Loan_Detail();
L2.Calculate_EMI();

cout<<endl<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}