//LowestCommonAncestor
#include"BST.h"
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
    if(N<n->data && M<n->data)
    return preorder(n->left, N, M);
    if(N>n->data && M>n->data)
    return preorder(n->right, N, M);
    return n;
}