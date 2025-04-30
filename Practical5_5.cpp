#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Base class with a virtual function for polymorphic behavior
class Shape 
{
public:
    virtual double Area() const = 0; // Pure virtual function
    virtual void display() const = 0; // Optional display function
    virtual ~Shape() {} // Virtual destructor for cleanup
};

// Derived class: Rectangle
class Rectangle : public Shape 
{
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double Area() const override
    {
        return length * width;
    }

    void display() const override 
    {
        cout << "Rectangle Area: " << Area() << endl;
    }
};

// Derived class: Circle
class Circle : public Shape 
{
    double radius;

public:
    Circle(double r) : radius(r) {}

    double Area() const override 
    {
        return M_PI * radius * radius;
    }

    void display() const override 
    {
        cout << "Circle Area: " << Area() << endl;
    }
};

int main() 
{
    // Dynamic collection using vector (automatically resizes)
    vector<Shape*> shapeList;

    shapeList.push_back(new Rectangle(5, 3));
    shapeList.push_back(new Circle(4));

    cout << "Dynamic shape list:" << endl;
    for (Shape* shape : shapeList) 
    {
        shape->display();  // Polymorphic call to Area()
    }

    // Clean up dynamic memory
    for (Shape* shape : shapeList) 
    {
        delete shape;
    }

    // Static shape storage using fixed-size array
    Shape* staticShapes[2];
    staticShapes[0] = new Rectangle(2, 6);
    staticShapes[1] = new Circle(2.5);

    cout << "\nStatic shape array:" << endl;
    for (int i = 0; i < 2; ++i) 
    {
        staticShapes[i]->display();
        delete staticShapes[i]; // Clean up
    }

    return 0;
}
