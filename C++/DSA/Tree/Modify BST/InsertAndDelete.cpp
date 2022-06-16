//InsertAndDelete
#include"../T.h"
struct node *insert(struct node *root, int data);
struct node *_delete(struct node *n, int data);
int main()
{
    int data;
    root=construct();
    cout<<"Insert node"<<endl;
    cin>>data;
    root=insert(root, data);
    display(root);
    cout<<endl<<"Delete node"<<endl;
    cin>>data;
    root=_delete(root, data);
    display(root);
    return 0;
}
struct node *insert(struct node *root, int data)
{
    struct node *n;
    n=root;
    while(1)
    {
        if(data<n->data)
        {
            if(n->left!=NULL)
            n=n->left;
            else
            {
                n->left=new node(data);
                break;
            }
        }
        else
        {
            if(n->right!=NULL)
            n=n->right;
            else
            {
                n->right=new node(data);
                break;
            }
        }
    }
    return root;
}
struct node *_delete(struct node *n, int data)
{
    struct node *l, *temp;
    if(n==NULL)
    return n;
    if(data==n->data)
    {
        if(n->right==NULL)
        n=n->left;
        else
        {
            l=n->left;
            n=n->right;
            temp=n;
            while(temp->left!=NULL)
            temp=temp->left;
            temp->left=l;
        }
    }
    if(data<n->data)
    n->left=_delete(n->left, data);
    else
    n->right=_delete(n->right, data);
    return n;
}