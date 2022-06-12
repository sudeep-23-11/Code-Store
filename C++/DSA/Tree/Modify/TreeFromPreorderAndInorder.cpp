//TreeFromPreorderAndInorder
#include"../T.h"
#include<map>
map<int, int>m;
struct node *bulid(int pre[], int ps, int pe, int in[], int is, int ie);
int main()
{
    int i, N;
    cin>>N;
    int pre[N], in[N];
    for(i=0;i<N;i++)
    cin>>pre[i];
    for(i=0;i<N;i++)
    {
        cin>>in[i];
        m.insert(make_pair(in[i], i));
    }
    display(bulid(pre, 0, N-1, in, 0, N-1));
    return 0;
}
struct node *bulid(int pre[], int ps, int pe, int in[], int is, int ie)
{
    int x, y;;
    if((ps>pe)||(is>ie))
    return NULL;
    struct node *root;
    root=new node(pre[ps]);
    x=m[pre[ps]];
    y=x-is;
    root->left=bulid(pre, ps+1, ps+y, in, is, x-1);
    root->right=bulid(pre, ps+y+1, pe, in, x+1, ie);
    return root;
}