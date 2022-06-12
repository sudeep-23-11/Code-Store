//ChildrenSumProperty
#include"../T.h"
void preorder(struct node *n);
int main()
{
    root=construct();
    preorder(root);
    display(root);
    return 0;
}
void preorder(struct node *n)
{
    int s;
    if(n==NULL)
    return;
    s=0;
    if(n->left!=NULL)
    s+=n->left->data;
    if(n->right!=NULL)
    s+=n->right->data;
    if(s<n->data)
    {
        if(n->left!=NULL)
        n->left->data=n->data;
        if(n->right!=NULL)
        n->right->data=n->data;
    }
    preorder(n->left);
    preorder(n->right);
    s=0;
    if(n->left!=NULL)
    s+=n->left->data;
    if(n->right!=NULL)
    s+=n->right->data;
    if(s>n->data)
    n->data=s;
}