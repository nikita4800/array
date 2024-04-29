#include<iostream>
using namespace std;
int main()
{
    //delete an duplicate element in an array
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    int i,j,k;
    cout<<"enter array elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}