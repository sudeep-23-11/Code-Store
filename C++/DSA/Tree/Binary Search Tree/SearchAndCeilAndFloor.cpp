//SearchAndCeilAndFloor
#include"../T.h"
int c, f;
struct node *preorder(struct node *n, int data);
void cf(struct node *root, int data);
int main()
{
    int data;
    root=construct();
    cin>>data;
    if(preorder(root, data)!=NULL)
    cout<<"Element present"<<endl;
    else
    cout<<"Element not present"<<endl;
    cin>>data;
    cf(root, data);
    cout<<"Ceil of "<<data<<" is "<<c<<endl;
    cout<<"Floor of "<<data<<" is "<<f<<endl;
    return 0;
}
struct node *preorder(struct node *n, int data)
{
    if((n==NULL)||(data==n->data))
    return n;
    if(data<n->data)
    return preorder(n->left, data);
    return preorder(n->right, data);
}
void cf(struct node *root, int data)
{
    struct node *n;
    n=root;
    while(n!=NULL)
    {
        if(n->data==data)
        {
            c=n->data;
            f=n->data;
            break;
        }
        if(n->data>data)
        {
            c=n->data;
            n=n->left;
        }
        else
        {
            f=n->data;
            n=n->right;
        }
    }
}