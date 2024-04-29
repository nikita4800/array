#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
    return 1;
    else{
        return num*fact(num-1);
    }
}
int main()
{
    int num;
    cout<<"enter your number"<<endl;
    cin>>num;
    int ans=fact(num);
    cout<<"the factorial of a number is "<<ans;

}