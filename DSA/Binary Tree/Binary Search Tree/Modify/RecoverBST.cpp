//RecoverBST
#include"../BST.h"
void inorder(node *n, node *(&p), node *(&f), node *(&m), node *(&l));
int main()
{
    root=construct();
    node *p, *f, *m, *l;
    p=NULL;
    f=NULL;
    m=NULL;
    l=NULL;
    inorder(root, p, f, m, l);
    if(!l)
    swap(f->data, m->data);
    else
    swap(f->data, l->data);
    display(root);
    return 0;
}
void inorder(node *n, node *(&p), node *(&f), node *(&m), node *(&l))
{
    if(!n)
    return;
    inorder(n->left, p, f, m, l);
    if(p && n->data<p->data)
    {
        if(!f)
        {
            f=p;
            m=n;
        }
        else
        l=n;
    }
    p=n;
    inorder(n->right, p, f, m, l);
}