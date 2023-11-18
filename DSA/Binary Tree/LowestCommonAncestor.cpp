//LowestCommonAncestor
#include"BT.h"
node *preorder(node *n, int N, int M);
int main()
{
    int N, M;
    root=construct();
    cin>>N>>M;
    cout<<preorder(root, N, M)->data<<endl;
    return 0;
}
node *preorder(node *n, int N, int M)
{
    node *l, *r;
    if(!n || n->data==N || n->data==M)
    return n;
    l=preorder(n->left, N, M);
    r=preorder(n->right, N, M);
    if(!l)
    return r;
    if(!r)
    return l;
    return n;
}