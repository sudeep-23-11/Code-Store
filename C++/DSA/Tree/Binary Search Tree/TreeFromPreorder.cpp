//TreeFromPreorder
#include"../T.h"
int i, N;
struct node *bulid(int pre[], int r);
int main()
{
    cin>>N;
    int pre[N];
    for(i=0;i<N;i++)
    cin>>pre[i];
    i=0;
    display(bulid(pre, 100001));
    return 0;
}
struct node *bulid(int pre[], int r)
{
    if((i==N)||(pre[i]>r))
    return NULL;
    struct node *root;
    root=new node(pre[i]);
    i++;
    root->left=bulid(pre, root->data);
    root->right=bulid(pre, r);
    return root;
}