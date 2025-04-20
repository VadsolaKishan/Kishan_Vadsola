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