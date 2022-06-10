//Boundary
#include"../T.h"
#include<vector>
#include<stack>
void left(struct node *n);
void leaf(struct node *n);
void right(struct node *n);
vector<struct node *>v;
stack<struct node *>st;
int main()
{
    struct node *root;
    root=construct();
    v.push_back(root);
    left(root->left);
    leaf(root);
    right(root->right);
    for(auto i:v)
    cout<<i->data<<" ";
    return 0;
}
void left(struct node *n)
{
    while((n->left!=NULL)||(n->right!=NULL))
    {
        v.push_back(n);
        if(n->left!=NULL)
        n=n->left;
        else
        n=n->right;
    }
}
void leaf(struct node *n)
{
    if(n==NULL)
    return;
    if((n->left==NULL)&&(n->right==NULL))
    {
        v.push_back(n);
        return;
    }
    leaf(n->left);
    leaf(n->right);
}
void right(struct node *n)
{
    while((n->left!=NULL)||(n->right!=NULL))
    {
        st.push(n);
        if(n->right!=NULL)
        n=n->right;
        else
        n=n->left;
    }
    while(st.empty()==0)
    {
        v.push_back(st.top());
        st.pop();
    }
}