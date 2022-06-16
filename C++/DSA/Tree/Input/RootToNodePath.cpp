//RootToNodePath
#include"../T.h"
#include<vector>
vector<int>v;
bool preorder(struct node *n, int N);
int main()
{
    int N;
    root=construct();
    cin>>N;
    preorder(root, N);
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}
bool preorder(struct node *n, int N)
{
    if(n==NULL)
    return false;
    v.push_back(n->data);
    if((n->data==N)||(preorder(n->left, N)==true)||(preorder(n->right, N)==true))
    return true;
    v.pop_back();
    return false;
}