#include<iostream>
using namespace std;

class Dyanamic_Array
{
    int *Data;      // Pointer to hold dynamic array
    int Size;       // Current number of elements
    int Capacity;   // Total capacity of array

    void Resize()
    {
        cout<<"Resizing The Array..."<<endl;
        Capacity *= 2;                     // Double the capacity
        int *NewData = new int[Capacity]; // Create new larger array
        for(int i=0;i<Size;i++)
        {
            NewData[i] = Data[i];         // Copy old elements
        }
        delete[] Data;                    // Free old memory
        Data = NewData;                   // Point to new data
    }

public:

    Dyanamic_Array(int initial_capacity=4)
    {
        Size = 0;
        Capacity = initial_capacity;
        Data = new int[Capacity];         // Initialize with given capacity
    }

    ~Dyanamic_Array()
    {
        delete[] Data;                    // Free allocated memory
    }   

    void Insert(int value)
    {
        if(Size == Capacity)
        {
            Resize();                     // Resize if capacity is full
        }
        Data[Size++] = value;             // Insert element and increment size
    }   

    void Remove(int index)
    {
        if(index < 0 || index >= Size)
        {
            cout<<"Invalid Index..."<<endl;
            return;
        }
        for(int i=index;i<Size-1;i++)
        {
            Data[i] = Data[i+1];          // Shift elements left
        }
        cout<<"Remove The Element Of Particular Index "<<index<<" : "<<Data[index]<<endl;
        Size--;                           // Decrease size
    }

    int Get(int index)const
    {
        if(index < 0 || index >= Size)
        {
            cout<<"Invalid Index..."<<endl;
            return -1;
        }
        cout<<"Get The Element Of Particular Index "<<index<<" : "<<Data[index]<<endl;
    }

    void Display()const
    {
        for(int i=0;i<Size;i++)
        {
            cout<<Data[i]<<" ";           // Display elements
        }
        cout<<endl;
    }

};

int main()
{
    Dyanamic_Array arr;

    arr.Insert(10);  // Insert elements
    arr.Insert(20);
    arr.Insert(30);
    arr.Insert(40);
    arr.Display();   // Output: 10 20 30 40

    arr.Remove(2);   // Remove element at index 2 (value 30)
    arr.Get(1);      // Get element at index 1 (value 20)

    arr.Display();   // Output: 10 20 40

    arr.Insert(50);  // Trigger resize if needed
    arr.Insert(60);
    arr.Insert(70);
    
    cout<<"After Inserting..."<<endl;
    arr.Display();   // Output final array
}
