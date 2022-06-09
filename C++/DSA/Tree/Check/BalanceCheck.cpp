//BalanceCheck
#include"../T.h"
int height(struct node *n);
int main()
{
    struct node *root;
    root=construct();
    if(height(root)!=-1)
    cout<<"Balance present"<<endl;
    else
    cout<<"Balance not present"<<endl;
    return 0;
}
int height(struct node *n)
{
    int lh, rh;
    if(n==NULL)
    return 0;
    lh=height(n->left);
    if(lh==-1)
    return -1;
    rh=height(n->right);
    if(rh==-1)
    return -1;
    if(((lh-rh)<-1)||((lh-rh)>1))
    return -1;
    return max(lh, rh)+1;
}