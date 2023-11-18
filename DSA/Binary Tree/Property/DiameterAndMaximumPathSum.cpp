//DiameterAndMaximumPathSum
#include"../BT.h"
int height1(node *n, int &d);
int height2(node *n, int &m);
int main()
{
    int d, m;
    root=construct();
    d=0;
    height1(root, d);
    cout<<d<<endl;
    m=0;
    height2(root, m);
    cout<<m<<endl;
    return 0;
}
int height1(node *n, int &d)
{
    int lh, rh;
    if(!n)
    return 0;
    lh=height1(n->left, d);
    rh=height1(n->right, d);
    d=max(d, lh+rh+1);
    return max(lh, rh)+1;
}
int height2(node *n, int &m)
{
    int ls, rs;
    if(!n)
    return 0;
    ls=max(height2(n->left, m), 0);
    rs=max(height2(n->right, m), 0);
    m=max(m, ls+rs+n->data);
    return max(ls, rs)+n->data;
}