#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct node *root;
struct node *construct()
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
void display(struct node *n)
{
    if(n==NULL)
    return;
    cout<<n->data<<" ";
    display(n->left);
    display(n->right);
}