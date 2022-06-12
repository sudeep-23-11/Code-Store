//FlattenTree
#include"../T.h"
int main()
{
    struct node *n, *l;
    root=construct();
    n=root;
    while(n!=NULL)
    {
        if(n->left!=NULL)
        {
            l=n->left;
            while(l->right!=NULL)
            l=l->right;
            l->right=n->right;
            n->right=n->left;
            n->left=NULL;
        }
        n=n->right;
    }
    display(root);
    return 0;
}