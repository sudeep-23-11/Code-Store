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
    int res;
    node *n;
    res=-1;
    n=root;
    while(n)
    {
        if(data<n->data)
        {
            res=n->data;
            n=n->left;
        }
        else
        n=n->right;
    }
    return res;
}
int pred(node *root, int data)
{
    int res;
    node *n;
    res=-1;
    n=root;
    while(n)
    {
        if(data>n->data)
        {
            res=n->data;
            n=n->right;
        }
        else
        n=n->left;
    }
    return res;
}