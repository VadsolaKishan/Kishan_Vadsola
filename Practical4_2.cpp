#include<iostream>
#include<vector>
using namespace std;

class Person
{
    private:
    string Name;
    int Age;

    public:
    Person(string name,int age)
    {
        Name = name;
        Age = age;
    }

    string Get_Name()
    {
        return Name;
    }

    int Get_Age()
    {
        return Age;
    }
};

class Employee : private Person
{
    private:
    int Employee_Id;

    public:
    Employee(string name,int age,int emp_id) : Person(name,age)
    {
        Employee_Id = emp_id;
    }

    string Get_Emp_Name()
    {
        return Get_Name();
    }

    int Get_Emp_Age()
    {
        return Get_Age();
    }
    int Get_Id()
    {
        return Employee_Id;
    }
};

class Manager : private Employee
{
    private:
    string Department;

    public:
    Manager(string name,int age,int emp_id,string department) : Employee(name,age,emp_id)
    {
        Department = department;
    }
    
    void Display_Details()
    {
        cout<<"Name : "<<Get_Emp_Name()<<endl;
        cout<<"Age : "<<Get_Emp_Age()<<endl;
        cout<<"Employee Id : "<<Get_Id()<<endl;
        cout<<"Department : "<<Department<<endl;
    }
};

int main()
{
    vector<Manager>managers;

    int n;
    cout<<"Enter The Number Of Managers : ";
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        string name,department;
        int age,emp_id;
        cout<<"<-<-<-<-<-"<<"Manager - "<<i+1<<" ->->->->->"<<endl<<endl;
        cout<<"Enter The Name : ";
        cin>>name;
        cout<<"Enter The Age : ";
        cin>>age;
        cout<<"Enter The Employee Id : ";
        cin>>emp_id;
        cout<<"Enter The Department : ";
        cin>>department;
    
        Manager M(name,age,emp_id,department);
        managers.push_back(M);
    }

    for(int i=0;i<n;i++)
    {
        cout<<endl;
        managers[i].Display_Details();
    }
    cout<<endl<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";
}