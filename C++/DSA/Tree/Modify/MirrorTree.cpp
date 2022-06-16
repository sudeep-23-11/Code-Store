//MirrorTree
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
    if(n==NULL)
    return;
    swap(n->left, n->right);
    preorder(n->left);
    preorder(n->right);
}