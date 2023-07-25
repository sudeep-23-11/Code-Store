//InorderSuccessorAndPredecessor
#include"BST.h"
int succ(node *root, int data);
int pred(node *root, int data);
int main()
{
    int data;
    root=construct();
    cin>>data;
    cout<<"Successor of "<<data<<" is "<<succ(root, data)<<endl;
    cout<<"Predecessor of "<<data<<" is "<<pred(root, data)<<endl;
    return 0;
}
int succ(node *root, int data)
{
    int s;
    node *n;
    s=-1;
    n=root;
    while(n)
    {
        if(n->data>data)
        {
            s=n->data;
            n=n->left;
        }
        else
        n=n->right;
    }
    return s;
}
int pred(node *root, int data)
{
    int p;
    node *n;
    p=-1;
    n=root;
    while(n)
    {
        if(n->data>=data)
        n=n->left;
        else
        {
            p=n->data;
            n=n->right;
        }
    }
    return p;
}

//InorderSuccessor - Ceil
//InorderSuccessor - , SmallestElementGreaterThan