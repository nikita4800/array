#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,0,0,3,2,0,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
            }
    }
    cout<<"elements"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }

return 0;
}