#include<iostream>
using namespace std;
int main()
{

    //third largest element in an array
    int i;
    int arr[]={1,2,3,4,5,6,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int secmax=INT_MIN;
    int third=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {    third=secmax;
            secmax=max;
          max=arr[i];
          
        }
        else{
            if(arr[i]>third && arr[i]<secmax)
            {
                third=arr[i];
            }
        }
    }
    cout<<"second largest element "<<third<<endl;
return 0;
}