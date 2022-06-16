//LargestBST
#include"../T.h"
struct BST
{
    int ma;
    int mi;
    int s;
    BST(int ma, int mi, int s)
    {
        this->ma=ma;
        this->mi=mi;
        this->s=s;
    }
};
struct BST *postorder(struct node *n);
int main()
{
    root=construct();
    cout<<postorder(root)->s<<endl;
    return 0;
}
struct BST *postorder(struct node *n)
{
    struct BST *a, *b;
    if(n==NULL)
    return new BST(-100001, 100001, 0);
    a=postorder(n->left);
    b=postorder(n->right);
    if((a->ma<n->data)&&(b->mi>n->data))
    return new BST(max(n->data, b->ma), min(n->data, a->mi), (a->s+b->s+1));
    return new BST(100001, -100001, max(a->s, b->s));
}