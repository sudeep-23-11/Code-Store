//TreeFromPostorderAndInorder
#include"../T.h"
#include<map>
map<int, int>m;
struct node *bulid(int post[], int ps, int pe, int in[], int is, int ie);
int main()
{
    int i, N;
    cin>>N;
    int post[N], in[N];
    for(i=0;i<N;i++)
    cin>>post[i];
    for(i=0;i<N;i++)
    {
        cin>>in[i];
        m.insert(make_pair(in[i], i));
    }
    display(bulid(post, 0, N-1, in, 0, N-1));
    return 0;
}
struct node *bulid(int post[], int ps, int pe, int in[], int is, int ie)
{
    int x, y;
    struct node *root;
    if((ps>pe)||(is>ie))
    return NULL;
    root=new node(post[pe]);
    x=m[post[pe]];
    y=x-is;
    root->left=bulid(post, ps, ps+y-1, in, is, x-1);
    root->right=bulid(post, ps+y, pe-1, in, x+1, ie);
    return root;
}