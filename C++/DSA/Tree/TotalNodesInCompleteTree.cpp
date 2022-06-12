//TotalNodesInCompleteTree
#include"T.h"
#include<cmath>
int height(struct node *n);
int main()
{
    root=construct();
    cout<<height(root)<<endl;
    return 0;
}
int height(struct node *n)
{
    int ld, rd;
    struct node *temp;
    if(n==NULL)
    return 0;
    ld=0;
    temp=n;
    while(temp!=NULL)
    {
        ld++;
        temp=temp->left;
    }
    rd=0;
    temp=n;
    while(temp!=NULL)
    {
        rd++;
        temp=temp->right;
    }
    if(ld==rd)
    return (int)pow(2, ld)-1;
    else
    return height(n->left)+height(n->right)+1;
}