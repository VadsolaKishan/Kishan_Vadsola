/* In a digital mapping application, a team of developers is working on a feature that allows objects to 
be repositioned dynamically on a coordinate plane. The application requires precise control over the 
movement of individual points representing user-defined markers. To achieve this, the team needs to 
design a system that allows a point’s coordinates to be adjusted efficiently while maintaining a fluid 
and chainable update mechanism. 
To ensure seamless movement, the developers must implement a structure that allows each point to 
shift by specified offsets in the x and y directions. Additionally, the solution should be designed in a 
way that supports method chaining, enabling multiple transformations to be applied in a single 
statement. This requires careful handling of object references, utilizing this pointer to return the 
updated object. 
Furthermore, the implementation must be optimized for direct memory management, ensuring that 
objects are updated through pass-by-reference using pointers. */

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
