//MaximumPathSum
#include"../T.h"
int m;
int height(struct node *n);
int main()
{
    root=construct();
    m=0;
    height(root);
    cout<<m<<endl;
    return 0;
}
int height(struct node *n)
{
    int ls, rs;
    if(n==NULL)
    return 0;
    ls=max(height(n->left), 0);
    rs=max(height(n->right), 0);
    m=max(m, (ls+rs+n->data));
    return max(ls, rs)+n->data;
}