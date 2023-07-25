//ChildrenSumProperty
#include"../BT.h"
void preorder(node *n);
int main()
{
    root=construct();
    preorder(root);
    display(root);
    return 0;
}
void preorder(node *n)
{
    int s;
    if(!n)
    return;
    s=0;
    if(n->left)
    s+=n->left->data;
    if(n->right)
    s+=n->right->data;
    if(s<n->data)
    {
        if(n->left)
        n->left->data=n->data;
        if(n->right)
        n->right->data=n->data;
    }
    preorder(n->left);
    preorder(n->right);
    s=0;
    if(n->left)
    s+=n->left->data;
    if(n->right)
    s+=n->right->data;
    if(s>n->data)
    n->data=s;
}