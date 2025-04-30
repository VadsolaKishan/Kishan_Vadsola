#include<iostream>
using namespace std;

class Point
{
    int x,y; // Coordinates of the point

public:
    Point(int x=0,int y=0) // Constructor with default arguments
    {
        this->x = x;
        this->y = y;
    }

    Point *Move(int &dx,int &dy) // Move the point by dx and dy
    {
        x += dx;
        y += dy;
        return this; // Return pointer to current object for chaining
    }

    void Display()const // Display the point
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl;
    }
};


int main()
{
    int x,y;
    cout<<"Enter Initial x And y Coordinate : ";
    cin>>x>>y; // Input initial coordinates

    Point *p = new Point(x,y); // Dynamically create Point object
    cout<<"Initial Point : ";
    p->Display(); // Display initial point
    cout<<endl;

    int dx1,dy1,dx2,dy2;

    cout<<"Enter The dx1 and dy1 : ";
    cin>>dx1>>dy1; // Input first move
    cout<<"Enter The dx2 and dy2 : ";
    cin>>dx2>>dy2; // Input second move

    p->Move(dx1,dy1)->Move(dx2,dy2); // Chain move operations

    cout<<"Updated Point : ";
    p->Display(); // Display updated point
    cout<<endl;
}
