#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
node *root;
node *construct()
{
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->right->left=new node(8);
    root->right->left->right=new node(9);
    root->right->left->right->left=new node(10);
    return root;
}
void display(node *n)
{
    if(!n)
    return;
    cout<<n->data<<" ";
    display(n->left);
    display(n->right);
}