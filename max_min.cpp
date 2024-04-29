#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,8,4,6,9,2,4,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
      }  
    }
    cout<<"the minimum element is "<<min<<endl;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     cout<<"the maximum element is "<<max;
return 0;

}