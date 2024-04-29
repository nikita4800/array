#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[]={2,6,8,9};
    int n1=sizeof(arr1)/sizeof(arr[0]);
    int i,j,count=0;
    cout<<"the element is "<<" ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
           if(arr[i]==arr1[j])
           {
              count++;
              cout<<arr[i]<<" ";
           }
        }
    }
    cout<<endl;
    cout<<"the same element are "<<count;
return 0;
}
    