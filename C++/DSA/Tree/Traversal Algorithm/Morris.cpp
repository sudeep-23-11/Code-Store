//Morris
#include"../T.h"
#include<vector>
vector<struct node *>pre, in;
int main()
{
    struct node *n, *l;
    root=construct();
    n=root;
    while(n!=NULL)
    {
        if(n->left==NULL)
        {
            pre.push_back(n);
            in.push_back(n);
            n=n->right;
            continue;
        }
        l=n->left;
        while((l->right!=NULL)&&(l->right!=n))
        l=l->right; 
        if(l->right==NULL)
        {
            l->right=n;
            pre.push_back(n);
            n=n->left;
        }
        else
        {
            l->right=NULL;
            in.push_back(n);
            n=n->right;
        }
    }
    cout<<"Preorder traversal"<<endl;
    for(auto i:pre)
    cout<<i->data<<" ";
    cout<<endl<<"Inorder traversal"<<endl;
    for(auto i:in)
    cout<<i->data<<" ";
    return 0;
}