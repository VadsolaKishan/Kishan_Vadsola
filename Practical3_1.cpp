#include<iostream>
#include<vector>

using namespace std;

class Employee
{
    public: 
    string Name;
    double Basic_Salary;
    double Bonus;
    double Total_Salary;

    Employee(string E_Name,double E_Basic_Salary,double E_Bonus=0)
    {
        Name = E_Name;
        Basic_Salary = E_Basic_Salary;
        Bonus = E_Bonus;
    }

    void Cal_Total_Salary()
    {
        Total_Salary = Basic_Salary + Bonus;
    }

    void Display_Detail()
    {
        cout<<"Employee Name : "<<Name<<endl;
        cout<<"Employee Basic Salary : "<<Basic_Salary<<endl;
        cout<<"Employee Bonus : "<<Bonus<<endl;
        cout<<"Employee Total Salary : "<<Total_Salary<<endl;
        cout<<"------------------------------------"<<endl;
    }

};

int main()
{
    vector<Employee>employees;

    employees.push_back(Employee("Kishan",50000,5000));
    employees.push_back(Employee("Abhishek",20000));
    employees.push_back(Employee("Prince",60000,5000));
    employees.push_back(Employee("Shrey",10000));
    
    for(auto& emp : employees)
    {
        emp.Cal_Total_Salary();
        emp.Display_Detail();
    }

    cout<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";
}