/* A software development team aimed to design a versatile utility that could perform basic arithmetic 
operations while demonstrating the concept of function overloading. This effort resulted in a class
based calculator system capable of handling various combinations of input types, such as integers and 
floating-point numbers. The system includes multiple overloaded add functions, each tailored to 
accept distinct input types and perform addition operations accordingly. This approach ensures the 
calculator is adaptable and provides consistent functionality regardless of the input types. 
The case revolves around testing and validating the versatility of this calculator. Participants are 
expected to create instances of the calculator, invoke the appropriate overloaded functions for various 
input scenarios, and store the resulting values for further analysis. To organize and display these 
results, the system incorporates methods to sequentially process and present the outcomes. */

#include<iostream>
#include<vector>
using namespace std;

class Calculater
{
    public:

    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    double add(double a, int b)
    {
        return a + b;
    }

    double add(int a, double b)
    {
        return a + b;
    }
};



int main()
{
    Calculater C;
    vector<double>results;

    results.push_back(C.add(5,10));
    results.push_back(C.add(5.5,10.5));
    results.push_back(C.add(5.5,10));   
    results.push_back(C.add(5,10.5));

    for(size_t i=0;i<results.size();i++)
    {
        cout<<"Result "<<i+1<<" : "<<results[i]<<endl;
    }
}
