//RecoverBST
#include"../T.h"
struct node *p, *f, *m, *l;
void inorder(struct node *n);
int main()
{
    root=construct();
    p=NULL;
    f=NULL;
    m=NULL;
    l=NULL;
    inorder(root);
    if(l==NULL)
    swap(f->data, m->data);
    else
    swap(f->data, l->data);
    display(root);
    return 0;
}
void inorder(struct node *n)
{
    if(n==NULL)
    return;
    inorder(n->left);
    if((p!=NULL)&&(n->data<p->data))
    {
        if(f==NULL)
        {
            f=p;
            m=n;
        }
        else
        l=n;
    }
    p=n;
    inorder(n->right);
}