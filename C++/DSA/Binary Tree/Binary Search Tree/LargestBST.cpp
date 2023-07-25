//LargestBST
#include"BST.h"
#include<climits>
struct BST
{
    int ma, mi, s;
    BST(int _ma, int _mi, int _s)
    {
        ma=_ma;
        mi=_mi;
        s=_s;
    }
};
BST *postorder(node *n);
int main()
{
    root=construct();
    cout<<postorder(root)->s<<endl;
    return 0;
}
BST *postorder(node *n)
{
    BST *a, *b;
    if(!n)
    return new BST(INT_MIN, INT_MAX, 0);
    a=postorder(n->left);
    b=postorder(n->right);
    if(a->ma<n->data && b->mi>n->data)
    return new BST(max(n->data, b->ma), min(n->data, a->mi), a->s+b->s+1);
    return new BST(100001, INT_MIN, max(a->s, b->s));
}