//BSTCheck
#include"BST.h"
#include<climits>
bool preorder(node *n, int l, int r);
int main()
{
    root=construct();
    if(preorder(root, INT_MIN, INT_MAX))
    cout<<"BST present"<<endl;
    else
    cout<<"BST not present"<<endl;
    return 0;
}
bool preorder(node *n, int l, int r)
{
    if(!n)
    return true;
    if(n->data>l && n->data<r && preorder(n->left, l, n->data) && preorder(n->right, n->data, r))
    return true;
    return false;
}