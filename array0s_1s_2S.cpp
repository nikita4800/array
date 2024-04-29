#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,1,2,0,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid=0,lo=0,high=n-1,i;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[lo]);
            mid++;
            lo++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else
        {
        swap(arr[mid],arr[high]);
        high--;
        }
    }
    cout<<"the elements "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}