//BalancedTreeFromInorder
#include"../T.h"
struct node *bulid(int in[], int l, int r);
int main()
{
    int i, N;
    cin>>N;
    int in[N];
    for(i=0;i<N;i++)
    cin>>in[i];
    display(bulid(in, 0, N-1));
    return 0;
}
struct node *bulid(int in[], int l, int r)
{
    int m;
    struct node *root;
    if(l>r)
    return NULL;
    m=(l+r)/2;
    root=new node(in[m]);
    root->left=bulid(in, l, m-1);
    root->right=bulid(in, m+1, r);
    return root;
}