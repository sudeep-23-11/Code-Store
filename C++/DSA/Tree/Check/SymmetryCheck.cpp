//SymmetryCheck
#include"../T.h"
bool preorder(struct node *n1, struct node *n2);
int main()
{
    root=construct();
    if(preorder(root->left, root->right)==true)
    cout<<"Symmetry present"<<endl;
    else
    cout<<"Symmetry not present"<<endl;
    return 0;
}
bool preorder(struct node *n1, struct node *n2)
{
    if((n1==NULL)||(n2==NULL))
    return n1==n2;
    return (n1->data==n2->data)&&preorder(n1->left, n2->right)&&preorder(n1->right, n2->left);
}