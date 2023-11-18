//CompleteTreeNodes
#include"../BT.h"
#include<cmath>
int height(node *n);
int main()
{
    root=construct();
    cout<<height(root)<<endl;
    return 0;
}
int height(node *n)
{
    int ld, rd;
    node *temp;
    if(!n)
    return 0;
    ld=0;
    temp=n;
    while(temp)
    {
        ld++;
        temp=temp->left;
    }
    rd=0;
    temp=n;
    while(temp)
    {
        rd++;
        temp=temp->right;
    }
    if(ld==rd)
    return (int)pow(2, ld)-1;
    else
    return height(n->left)+height(n->right)+1;
}