#include<iostream>
using namespace std;
int  power(int a,int b)
{
   int ans=1,i;
   for(i=1;i<=b;i++)
   {
    ans=ans*a;
   }
return ans;
}
int main()
{
    int a,b;
    cout<<"enter the a and b"<<endl;
    cin>>a>>b;
    int answer=power(a,b);
   cout<<"the answer is "<<answer;
     return 0;
}





