#include<iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int top;
    int size;
//stack using array
    stack(int size)
    {
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    void push(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=-1)
        {
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek()
    {
        if(top>=-1)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack empty"<<endl;
            return -1;
        }
    }
    bool isempty() 
    {
        if(top== -1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    stack st(5);
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);
       st.push(5);
        
        st.display();
        cout<<st.peek()<<endl;
       st.pop();
      st.display();
        cout<<st.peek()<<endl;
       
}

