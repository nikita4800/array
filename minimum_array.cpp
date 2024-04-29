#include<iostream>
using namespace std;
int main()
{
    //Find the Minimum element
    int arr[]={2,4,5,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    int min=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"the minmum element "<<min<<endl;
    return 0;
}