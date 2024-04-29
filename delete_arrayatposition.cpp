#include<iostream>
using namespace std;
int main()
{
    //delete an array at a position
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    int i;
    cout<<"enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int index;
    cout<<"enter the index you want to delete"<<endl;
    cin>>index;
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
        
    }
    size--;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}