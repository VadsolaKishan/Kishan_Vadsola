/* A team of developers is tasked with building a temperature conversion system for a weather 
application. To achieve this, the team creates two classes: Celsius and Fahrenheit. These classes 
handle the conversion between temperature units, with the ability to convert from Celsius to 
Fahrenheit and vice versa using type conversion. The team utilizes operator overloading to define the 
conversion operators for both classes, enabling seamless conversions between the two units. 
The system also requires the ability to compare two temperature objects to check if they are equal. 
This is achieved by overloading the equality operator ==, which compares the values of the 
temperatures in their respective units. 
To ensure smooth processing of temperature conversions, the team needs to manage and store 
multiple converted temperature objects. Two approaches are considered for handling this task. The 
first approach involves using a dynamic data structure, a queue, to process the conversions in a first
in-first-out (FIFO) manner. Alternatively, a basic array is used to store the converted objects in a static 
manner. */

#include <iostream>
#include <queue>
using namespace std;

// Forward declaration for conversion
class Fahrenheit;

class Celsius 
{
    float celsius;

public:
    Celsius(float c = 0) : celsius(c) {}

    // Conversion to Fahrenheit
    operator Fahrenheit();

    float getValue() const 
    {
        return celsius;
    }

    // Equality comparison with another Celsius object
    bool operator==(const Celsius& other) const 
    {
        return celsius == other.celsius;
    }

    void display() const 
    {
        cout << celsius << " C" << endl;
    }
};

class Fahrenheit 
{
    float fahrenheit;

public:
    Fahrenheit(float f = 0) : fahrenheit(f) {}

    // Conversion to Celsius
    operator Celsius() 
    {
        return Celsius((fahrenheit - 32) * 5 / 9);
    }

    float getValue() const 
    {
        return fahrenheit;
    }

    // Equality comparison with another Fahrenheit object
    bool operator==(const Fahrenheit& other) const 
    {
        return fahrenheit == other.fahrenheit;
    }

    void display() const 
    {
        cout << fahrenheit << " F" << endl;
    }
};

// Celsius to Fahrenheit conversion logic
Celsius::operator Fahrenheit() 
{
    return Fahrenheit((celsius * 9 / 5) + 32);
}

int main() 
{
    Celsius c1(25.0);
    Fahrenheit f1 = c1;  // Implicit conversion
    f1.display();        // Output: 77 °F

    Celsius c2 = f1;     // Convert back to Celsius
    c2.display();        // Output: 25 °C

    // Compare temperatures
    cout << ((c1 == c2) ? "Equal temperatures" : "Different temperatures") << endl;

    // FIFO storage using queue
    queue<Fahrenheit> tempQueue;
    tempQueue.push(f1);
    tempQueue.push(Fahrenheit(100));

    cout << "Queue contents:" << endl;
    while (!tempQueue.empty()) 
    {
        tempQueue.front().display();
        tempQueue.pop();
    }

    // Static array storage
    Celsius tempArray[3] = { Celsius(0), Celsius(10), Celsius(20) };
    cout << "Array contents:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        tempArray[i].display();
    }

    return 0;
}
