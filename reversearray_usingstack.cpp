#include<iostream>7
using namespace std;
class stack
{
    public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
         this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int element)
    {
        if(size-top>1)
        {  top++;
            arr[top]=element;
            
        }
        else
        {
           cout<<"stack is overflow"<<endl;
        }
    }
    
    void reverse()
    {
        int start=0;
        int end=size-1;
        while(size>=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }


};
int main()
{
    stack st(6);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.display();
    st.reverse();
}