//RightAndLeft
#include"../T.h"
#include<map>
map<int, struct node *>_right, _left;
void preorder1(struct node *n, int l);
void preorder2(struct node *n, int l);
int main()
{
    struct node *root, *n;
    root=construct();
    preorder1(root, 1);
    cout<<"Right View"<<endl;
    for(auto i:_right)
    cout<<i.second->data<<" ";
    preorder2(root, 1);
    cout<<endl<<"Left View"<<endl;
    for(auto i:_left)
    cout<<i.second->data<<" ";
    return 0;
}
void preorder1(struct node *n, int l)
{
    if(n==NULL)
    return;
    if(_right.count(l)==0)
    _right.insert(make_pair(l, n));
    preorder1(n->right, l+1);
    preorder1(n->left, l+1);
}
void preorder2(struct node *n, int l)
{
    if(n==NULL)
    return;
    if(_left.count(l)==0)
    _left.insert(make_pair(l, n));
    preorder2(n->left, l+1);
    preorder2(n->right, l+1);
}