#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cout<<"enter the string "<<endl;
    cin>>ch;
    int i,count=0;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    cout<<"the length is "<<count;
    return 0;
}

