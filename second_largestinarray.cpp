#include<iostream>
using namespace std;
int main()
{

    //second largest element in an array
    int i;
    int arr[]={2,8,6,5,17,9,10,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int secmax=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            secmax=max;
          max=arr[i];
          
        }
        else{
            if(arr[i]>secmax && arr[i]<max)
            {
                secmax=arr[i];
            }
        }
    }
    cout<<"second largest element "<<secmax<<endl;
return 0;
}