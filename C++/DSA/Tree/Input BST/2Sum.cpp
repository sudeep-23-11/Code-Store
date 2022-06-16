//2Sum
#include"../T.h"
#include<stack>
stack<struct node *>l, r;
void pushl(struct node *n);
void pushr(struct node *n);
int next();
int before();
int main()
{
    int i, j, N;
    root=construct();
    pushl(root);
    pushr(root);
    cin>>N;
    i=next();
    j=before();
    while((i+j)!=N)
    {
        if((i+j)<N)
        i=next();
        else
        j=before();
    }
    cout<<i<<" "<<j<<endl;
    return 0;
}
void pushl(struct node *n)
{
    while(n!=NULL)
    {
        l.push(n);
        n=n->left;
    }
}
void pushr(struct node *n)
{
    while(n!=NULL)
    {
        r.push(n);
        n=n->right;
    }
}
int next()
{
    struct node *n;
    n=l.top();
    l.pop();
    pushl(n->right);
    return n->data;
}
int before()
{
    struct node *n;
    n=r.top();
    r.pop();
    pushr(n->left);
    return n->data;
}