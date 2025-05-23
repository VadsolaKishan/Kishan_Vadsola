/* In an educational setting, an advanced grading system was conceptualized to accommodate the 
diverse evaluation criteria for students at different academic levels. At the heart of the system is an 
abstract base class that defines the grading framework. This class includes a protected member to 
store marks and declares a pure virtual function for computing grades, ensuring that specific grading 
logic is implemented by derived classes. 
Two distinct derived classes were introduced to handle the unique grading needs of undergraduate 
and postgraduate students. Each class defines its own implementation of the grade computation 
method, reflecting the varying academic expectations for these groups. The system enables users to 
input student data, compute grades based on the respective criteria, and manage a collection of 
student records. */

#include<iostream>
#include<vector>
using namespace std;

class Student
{
    protected:
    float Marks;

    public:
    void Set_Marks(float m)
    {
        Marks = m;
    }
    virtual string Compute_Grade() = 0;
};

class Ungraduate_Student : public Student
{
    public:
    string Compute_Grade() override
    {
        if(Marks >= 85)
            return "A";
        else if(Marks >= 70)
            return "B";
        else if(Marks >= 50)
            return "C";
        else
            return "F";
    }

};

class Post_Graduate_Student : public Student
{
    public:
    string Compute_Grade() override
    {
        if(Marks >= 90)
            return "A";
        else if(Marks >= 80)
            return "B";
        else if(Marks >= 70)
            return "C";
        else
            return "F";
    }
};

int main()
{
    vector<Student*>s;
    int n;

    cout<<"Enter The Number Of Student : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int type;
        float mark;
        cout<<"Enter The Student Type (1 For UG , 2 For PUG) : ";
        cin>>type;

        if(type == 1)
        {
            cout<<"Enter The Marks Of UG Student " <<i+1<<" : ";
            cin>>mark;
            Ungraduate_Student* ug = new Ungraduate_Student;
            ug->Set_Marks(mark);
            s.push_back(ug);
        }
        else if(type == 2)
        {
            cout<<"Enter The Marks Of PUG Student " <<i+1<<" : ";
            cin>>mark;
            Post_Graduate_Student* pug = new Post_Graduate_Student;
            pug->Set_Marks(mark);
            s.push_back(pug);
        }
        else
        {
            cout<<"Invalid Student Type!"<<endl;
        }
    }

        cout << "\nStudent Grades :\n";
        for (size_t i=0;i<s.size();i++) 
        {
        cout<<"Student "<<i + 1<<" : Grade = " <<s[i]->Compute_Grade()<< endl;
        }

        for (size_t i=0;i<s.size();i++) 
        {
        delete s[i];
        }
}
