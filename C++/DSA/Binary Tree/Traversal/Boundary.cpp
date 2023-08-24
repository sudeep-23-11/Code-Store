//Boundary
#include"../BT.h"
#include<vector>
bool leaf(node *n);
void left(node *n, vector<node *>&v);
void preorder(node *n, vector<node *>&v);
void right(node *n, vector<node *>&v);
int main()
{
    vector<node *>v;
    root=construct();
    v.push_back(root);
    left(root->left, v);
    preorder(root, v);
    right(root->right, v);
    for(auto i:v)
    cout<<i->data<<" ";
    cout<<endl;
    return 0;
}
bool leaf(node *n)
{
    if(!(n->left) && !(n->right))
    return true;
    return false;
}
void left(node *n, vector<node *>&v)
{
    if(!n)
    return;
    if(!leaf(n))
    v.push_back(n);
    if(n->left)
    left(n->left, v);
    else
    left(n->right, v);
}
void preorder(node *n, vector<node *>&v)
{
    if(!n)
    return;
    if(leaf(n))
    v.push_back(n);
    preorder(n->left, v);
    preorder(n->right, v);
}
void right(node *n, vector<node *>&v)
{
    if(!n)
    return;
    if(n->right)
    right(n->right, v);
    else
    right(n->left, v);
    if(!leaf(n))
    v.push_back(n);
}