//InsertAndDelete
#include"../BST.h"
void insert(node *n, int data);
node *_delete(node *n, int data);
int main()
{
    int data;
    root=construct();
    cout<<"Insert node"<<endl;
    cin>>data;
    insert(root, data);
    display(root);
    cout<<endl<<"Delete node"<<endl;
    cin>>data;
    root=_delete(root, data);
    display(root);
    return 0;
}
void insert(node *n, int data)
{
    if(data<n->data)
    {
        if(!(n->left))
        n->left=new node(data);
        else
        insert(n->left, data);
    }
    else
    {
        if(!(n->right))
        n->right=new node(data);
        else
        insert(n->right, data);
    }
}
node *_delete(node *n, int data)
{
    node *l;
    if(n->data==data)
    {
        if(!(n->left))
        return n->right;
        else
        {
            l=n->left;
            while(l->right)
            l=l->right;
            l->right=n->right;
            return n->left;
        }
    }
    if(data<n->data)
    n->left=_delete(n->left, data);
    else
    n->right=_delete(n->right, data);
    return n;
}