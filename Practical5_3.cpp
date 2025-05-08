/* A team of software developers was tasked with creating a graphical simulation where operations on 
2D points play a crucial role. To facilitate this, they designed a class Point that encapsulates the 
coordinates 𝑥 and 𝑦. The class provides flexibility through overloaded operators to manipulate points 
efficiently. The unary operator - is overloaded to negate the coordinates of a point, while the binary 
operator + enables the addition of two points. Additionally, the equality operator == is overloaded to 
compare whether two points have identical coordinates. 
The development process required performing various operations between multiple points. To 
manage these operations effectively, a mechanism was needed to track and potentially undo them. 
This challenge prompted two approaches: using a ready-made dynamic stack structure or building a 
custom stack implementation. By managing a sequence of operations in reverse, the stack-based 
design allowed for a systematic undo capability, crucial for simulations involving iterative adjustments. */

#include <iostream>
#include <vector>
using namespace std;

// Class to represent a 2D point
class Point 
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload unary minus (-) to negate point
    Point operator-() const 
    {
        return Point(-x, -y);
    }

    // Overload binary plus (+) to add two points
    Point operator+(const Point& other) const 
    {
        return Point(x + other.x, y + other.y);
    }

    // Overload equality (==) to compare points
    bool operator==(const Point& other) const 
    {
        return x == other.x && y == other.y;
    }

    void display() const 
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// Custom stack class to manage Point history (for undo)
class PointStack 
{
    vector<Point> stack;

public:
    void push(const Point& p)
    {
        stack.push_back(p);
    }

    Point pop() {
        if (stack.empty()) 
        {
            throw out_of_range("Stack is empty");
        }
        Point top = stack.back();
        stack.pop_back();
        return top;
    }

    bool isEmpty() const 
    {
        return stack.empty();
    }
};

// Main function to demonstrate functionality
int main() {
    Point p1(3, 4), p2(1, 2), result;
    PointStack history;

    // Perform addition
    history.push(p1);  // Save state before operation
    result = p1 + p2;
    result.display();  // Output: (4, 6)

    // Negate point
    history.push(result);
    result = -result;
    result.display();  // Output: (-4, -6)

    // Check equality
    cout << (p1 == p2 ? "Equal" : "Not Equal") << endl;

    // Undo last operation
    if (!history.isEmpty()) 
    {
        result = history.pop();
        cout << "Undo operation, current point: ";
        result.display();
    }

    return 0;
}
