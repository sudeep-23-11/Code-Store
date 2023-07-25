//2Sum
#include"BST.h"
#include<stack>
void pushl(node *n, stack<node *>&l);
void pushr(node *n, stack<node *>&r);
int next(stack<node *>&l);
int before(stack<node *>&r);
int main()
{
    int i, j, N;
    stack<node *>l, r;
    root=construct();
    pushl(root, l);
    pushr(root, r);
    cin>>N;
    i=next(l);
    j=before(r);
    while(i+j != N)
    {
        if(i+j < N)
        i=next(l);
        else
        j=before(r);
    }
    cout<<i<<" "<<j<<endl;
    return 0;
}
void pushl(node *n, stack<node *>&l)
{
    while(n)
    {
        l.push(n);
        n=n->left;
    }
}
void pushr(node *n, stack<node *>&r)
{
    while(n)
    {
        r.push(n);
        n=n->right;
    }
}
int next(stack<node *>&l)
{
    node *n;
    n=l.top();
    l.pop();
    pushl(n->right, l);
    return n->data;
}
int before(stack<node *>&r)
{
    node *n;
    n=r.top();
    r.pop();
    pushr(n->left, r);
    return n->data;
}