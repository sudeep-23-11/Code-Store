//Diameter
#include"../T.h"
int m;
int height(struct node *n);
int main()
{
    struct node *root;
    root=construct();
    m=0;
    height(root);
    cout<<m<<endl;
    return 0;
}
int height(struct node *n)
{
    int lh, rh;
    if(n==NULL)
    return 0;
    lh=height(n->left);
    rh=height(n->right);
    m=max(m, (lh+rh));
    return max(lh, rh)+1;
}