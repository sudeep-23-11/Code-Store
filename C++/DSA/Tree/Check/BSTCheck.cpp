//BSTCheck
#include"../T.h"
bool preorder(struct node *n, int l, int r);
int main()
{
    int N;
    root=construct();
    N=100001;
    if(preorder(root, -N, N)==true)
    cout<<"BST present"<<endl;
    else
    cout<<"BST not present"<<endl;
    return 0;
}
bool preorder(struct node *n, int l, int r)
{
    if(n==NULL)
    return true;
    if((n->data>l)&&(n->data<r)&&preorder(n->left, l, n->data)&&preorder(n->right, n->data, r))
    return true;
    return false;
}