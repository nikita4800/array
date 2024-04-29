#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=56;
    int f=0,e=n-1;
    int mid=(f+e)/2;
    while(f<=e)
    {
       if(arr[mid]==num)
       {
        cout<<"the element is present "<<endl;
        break;
       }
       else if(arr[mid]<num)
       {
        f=mid+1;
       }
       else
       
        e=mid-1;
        mid=(f+e)/2;
       
       
    }
    if(f>e)
       {
        cout<<"the element is not present"<<endl;
       }
return 0;
}


