#include<iostream>
#include<vector>
using namespace std;

int recursive_sum(vector<int>arr,int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return arr[n-1] + recursive_sum(arr,n-1);
    }
}
 
int main()
{
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    cout<<endl;

    vector<int>arr(n);

    // for(int i=0;i<n;i++)
    // {
    //     cout<<"Enter The Element "<<i+1<<" : ";
    //     cin>>arr[i];
    // }
    
    for(auto& i : arr)
    {
        cout<<"Enter The Element "<<i+1<<" : ";
        cin>>i;
    }

    recursive_sum(arr,n);
    cout<<endl<<"Sum Of Array Elements (recursive sum) : "<<recursive_sum(arr,n)<<endl<<endl;
    
    cout<<endl<<"Name : Vadsola Kishan"<<endl;
    cout<<"Id : 24CE134";

}