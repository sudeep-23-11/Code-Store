//FlattenTree
#include"../BT.h"
int main()
{
    node *n, *l;
    root=construct();
    n=root;
    while(n)
    {
        if(n->left)
        {
            l=n->left;
            while(l->right)
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