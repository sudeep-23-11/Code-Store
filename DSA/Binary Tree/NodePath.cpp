//NodePath
#include"BT.h"
#include<vector>
bool preorder(node *n, int N, vector<int>&v);
int main()
{
    int N;
    vector<int>v;
    root=construct();
    cin>>N;
    preorder(root, N, v);
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}
bool preorder(node *n, int N, vector<int>&v)
{
    if(!n)
    return false;
    v.push_back(n->data);
    if(n->data==N || preorder(n->left, N, v) || preorder(n->right, N, v))
    return true;
    v.pop_back();
    return false;
}