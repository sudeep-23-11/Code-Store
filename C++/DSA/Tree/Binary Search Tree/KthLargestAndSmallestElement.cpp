//KthLargestAndSmallestElement
#include"../T.h"
int K, c, g, s;
void inorder1(struct node *n);
void inorder2(struct node *n);
int main()
{
    root=construct();
    cin>>K;
    c=0;
    inorder1(root);
    cout<<K<<"th largest element is "<<g<<endl;
    c=0;
    inorder2(root);
    cout<<K<<"th smallest element is "<<s<<endl;
    return 0;
}
void inorder1(struct node *n)
{
    if(n==NULL)
    return;
    inorder1(n->right);
    c++;
    if(c==K)
    g=n->data;
    inorder1(n->left);
}
void inorder2(struct node *n)
{
    if(n==NULL)
    return;
    inorder2(n->left);
    c++;
    if(c==K)
    s=n->data;
    inorder2(n->right);
}