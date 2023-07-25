//TreeFromPreorderAndInorder
#include"../BT.h"
#include<unordered_map>
node *bulid(int pre[], int ps, int pe, int in[], int is, int ie, unordered_map<int, int>&m);
int main()
{
    int i, N;
    unordered_map<int, int>m;
    cin>>N;
    int pre[N], in[N];
    for(i=0;i<N;i++)
    cin>>pre[i];
    for(i=0;i<N;i++)
    {
        cin>>in[i];
        m.insert({in[i], i});
    }
    display(bulid(pre, 0, N-1, in, 0, N-1, m));
    return 0;
}
node *bulid(int pre[], int ps, int pe, int in[], int is, int ie, unordered_map<int, int>&m)
{
    int x, y;
    node *root;
    if(ps>pe || is>ie)
    return NULL;
    root=new node(pre[ps]);
    x=m[pre[ps]];
    y=x-is;
    root->left=bulid(pre, ps+1, ps+y, in, is, x-1, m);
    root->right=bulid(pre, ps+y+1, pe, in, x+1, ie, m);
    return root;
}