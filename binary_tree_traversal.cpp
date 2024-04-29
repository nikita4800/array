#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*right;
    Node*left;
};
Node*NewNode(int data)
{
    Node*element=new Node();
    element->data=data;
    element->right=NULL;
   element->left=NULL;
    return element;

}
//print only left side of tree
void print(Node*n)
{
    if(n!=NULL)
    {                                   //output-1 2 4
        cout<<n->data<<" ";
        print(n->left);
        }
cout<<endl;
}
//print left and right both side of a tree
void print(Node*n)
{
    if(n!=NULL)
    {                                     //output 1 2 3 4 5 6 7
        cout<<n->data<<" ";
        print(n->left);
        print(n->right);
    }
}
int main()
{
    Node*root=NewNode(1);
    /*
               1
             /   \
           Null  Null
  
*/

    root->left=NewNode(2);
    /*
               1
             /   \
            2   Null
          /   \
        Null  Null
*/

   root->right=NewNode(3);
   /*
                 1
             /        \
            2          3
          /   \      /   \
        Null  Null  Null  Null
*/


    root->left->left=NewNode(4);
    /*
                 1
             /        \
            2          3
          /   \      /   \
        4     Null  Null  Null
*/

    root->left->right=NewNode(5);
    /*
                 1
             /        \
            2          3
          /   \      /   \
        4      5  Null  Null
*/

    root->right->left=NewNode(6);
    /*
                 1
             /        \
            2          3
          /   \      /   \
        4      5   6     Null
*/

    root->right->right=NewNode(7);
    /*
                 1
             /        \
            2          3
          /   \      /   \
        4      5   6      7
*/

    print(root);
}