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
