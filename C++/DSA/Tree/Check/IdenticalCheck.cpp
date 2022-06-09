//IdenticalCheck
#include"../T.h"
bool preorder(struct node *n1, struct node *n2);
int main()
{
    struct node *root, *r;
    root=construct();
    r=construct();
    r->right->left->right->left=NULL;
    if(preorder(root, r)==true)
    cout<<"Identical present"<<endl;
    else
    cout<<"Identical not present"<<endl;
    return 0;
}
bool preorder(struct node *n1, struct node *n2)
{
    if((n1==NULL)||(n2==NULL))
    return n1==n2;
    return preorder(n1->left, n2->left)&&preorder(n1->right, n2->right)&&(n1->data==n2->data);
}