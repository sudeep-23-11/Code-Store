//PreorderAndInorderAndPostorder
#include"../BT.h"
void preorder(node *n);
void inorder(node *n);
void postorder(node *n);
int main()
{
    root=construct();
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl<<"Postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
void preorder(node *n)
{
    if(!n)
    return;
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
}
void inorder(node *n)
{
    if(!n)
    return;
    inorder(n->left);
    cout<<n->data<<" ";
    inorder(n->right);
}
void postorder(node *n)
{
    if(!n)
    return;
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<" ";
}