#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,2,3,7,6,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
              swap(arr[i],arr[j]);
           }
        }
    }
   cout<<"the asecending order ";
    for(i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
return 0;

}