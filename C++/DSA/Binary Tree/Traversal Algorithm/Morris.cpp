//Morris
#include"../BT.h"
#include<vector>
int main()
{
    node *n, *l;
    vector<node *>pre, in;
    root=construct();
    n=root;
    while(n)
    {
        if(!(n->left))
        {
            pre.push_back(n);
            in.push_back(n);
            n=n->right;
            continue;
        }
        l=n->left;
        while(l->right && l->right!=n)
        l=l->right; 
        if(!(l->right))
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
    cout<<endl;
    return 0;
}