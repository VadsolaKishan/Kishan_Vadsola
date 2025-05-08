/* A financial analytics company is working on a system that processes large volumes of sorted numerical 
data from different sources. The challenge is to efficiently combine two independently sorted datasets 
into a single, fully sorted dataset while ensuring optimal memory management. Since the size of the 
datasets varies dynamically based on incoming data streams, the solution must be flexible and manage 
memory efficiently without relying on built-in container libraries. 
To achieve this, the development team needs to implement a mechanism that accepts two sorted 
arrays of different sizes and merges them into a new dynamically allocated array while maintaining 
the sorted order. The system should read input values specifying the sizes of both datasets, followed 
by the elements of each array. After merging, the final sorted array should be displayed as output. 
Efficient memory handling is crucial in this implementation, requiring the use of new and delete 
operators for dynamic allocation and deallocation of memory. */

#include<iostream>
using namespace std;

int main()
{
    int n,m;
   
    int *arr1 = new int[n]; // Allocate memory for first array
    int *arr2 = new int[m]; // Allocate memory for second array

    cout<<"Enter The Size Of First Array(n) : ";
    cin>>n;

    cout<<endl;
    cout<<"Enter The Elements Of First Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter The Element "<<i+1<<" : ";
        cin>>arr1[i]; // Input elements for first array
    }

    cout<<"--------------------------------------"<<endl;
    cout<<"Enter The Size Of Second Array(m) : ";
    cin>>m;

    cout<<endl;
    cout<<"Enter The Elements Of Second Array : "<<endl;
    for(int j=0;j<m;j++)
    {
        cout<<"Enter The Element "<<j+1<<" : ";
        cin>>arr2[j]; // Input elements for second array
    }

    int *arr3 = new int[n+m]; // Allocate memory for merged array

    int i=0,j=0,k=0;
    
    // Merge arrays in sorted order
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1 (if any)
    while(i<n)
    {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }

    cout<<"--------------------------------------"<<endl;
    cout<<"Merged Array : ";
    for(int k=0;k<n+m;k++)
    {
        cout<<arr3[k]<<" "; // Output merged array
    }
}
