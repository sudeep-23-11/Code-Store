//MaximumDepth
#include"../T.h"
int height(struct node *n);
int main()
{
    struct node *root;
    root=construct();
    cout<<height(root)<<endl;
    return 0;
}
int height(struct node *n)
{
    if(n==NULL)
    return 0;
    return max(height(n->left), height(n->right))+1;
}