//LowestCommonAncestor
#include"../T.h"
struct node *preorder(struct node *n, int N, int M);
int main()
{
    int N, M;
    root=construct();
    cin>>N>>M;
    cout<<preorder(root, N, M)->data<<endl;
    return 0;
}
struct node *preorder(struct node *n, int N, int M)
{
    struct node *l, *r;
    if((n==NULL)||(n->data==N)||(n->data==M))
    return n;
    l=preorder(n->left, N, M);
    r=preorder(n->right, N, M);
    if(l==NULL)
    return r;
    if(r==NULL)
    return l;
    return n;
}