//BasicOnes
#include"../T.h"
void preorder(struct node *n);
void inorder(struct node *n);
void postorder(struct node *n);
int main()
{
    root=construct();
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl<<"Postorder traversal"<<endl;
    postorder(root);
    return 0;
}
void preorder(struct node *n)
{
    if(n==NULL)
    return;
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
}
void inorder(struct node *n)
{
    if(n==NULL)
    return;
    inorder(n->left);
    cout<<n->data<<" ";
    inorder(n->right);
}
void postorder(struct node *n)
{
    if(n==NULL)
    return;
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<" ";
}