#include<iostream>
using namespace std;

class Student
{
    public:
    int Roll_Number;
    string Name;
    double Mark[3];

    Student()
    {
        Roll_Number = 0;
        Name = "N/A";
        for(int i=0;i<3;i++)
        {
            Mark[i]=0;
        }
    }

    Student(int R_No,string S_Name,double m1,double m2,double m3)
    {
        Roll_Number = R_No;
        Name = S_Name;
        Mark[0] = m1;
        Mark[1] = m2;
        Mark[2] = m3;
    }

    int Display_Detail()
    {
        cout<<"Student Roll Number : "<<Roll_Number<<endl;
        cout<<"Student Name : "<<Name<<endl;
        cout<<"Student Marks : "<<Mark[0]<<","<<Mark[1]<<","<<Mark[2]<<endl; 
    }

    int Average_Mark()
    {
        double avg;
        avg = (Mark[0]+Mark[1]+Mark[2])/3.0;
        cout<<"Average Mark : "<<avg<<endl<<"---------------------------"<<endl;
    }
};


int main()
{
Student students[3];

students[0] = Student(13,"Kishan",87,94,94);
students[1] = Student(23,"Harsh",76,99,74);
students[2] = Student();

for(int i=0;i<3;i++)
{
    cout<<"Student "<<i+1<<" Detail."<<endl<<endl;
    students[i].Display_Detail();
    students[i].Average_Mark();
}

cout<<endl<<"Name : Vadsola Kishan"<<endl;
cout<<"Id : 24CE134";

}