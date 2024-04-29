#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char choose;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;
    cout<<"enter the symbole"<<endl;
    cin>>choose;
    switch(choose)
    {
        case '+':
                cout<<a<<"+"<<b<<"="<<a+b<<endl;
                break;

                case '-':
                cout<<a<<"-"<<b<<"="<<a-b<<endl;
                break;

                case '*':
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
                break;

                case '/':
                cout<<a<<"/"<<b<<"="<<a/b<<endl;
                break;

                default:
                cout<<"the choose is invalid"<<endl;


    }
    return 0;

}
