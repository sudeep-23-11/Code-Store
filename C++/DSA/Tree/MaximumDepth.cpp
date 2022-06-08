//MaximumDepth
#include"T.h"
int maxdepth(struct node *n);
int main()
{
    struct node *root;
    root=construct();
    cout<<maxdepth(root)<<endl;
    return 0;
}
int maxdepth(struct node *n)
{
    if(n==NULL)
    return 0;
    else
    return max(maxdepth(n->left), maxdepth(n->right))+1;
}