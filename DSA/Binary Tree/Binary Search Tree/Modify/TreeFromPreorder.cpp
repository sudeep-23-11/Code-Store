//TreeFromPreorder
#include"../BST.h"
#include<climits>
node *bulid(int pre[], int N, int &i, int r);
int main()
{
    int i, N;
    cin>>N;
    int pre[N];
    for(i=0;i<N;i++)
    cin>>pre[i];
    i=0;
    display(bulid(pre, N, i, INT_MAX));
    return 0;
}
node *bulid(int pre[], int N, int &i, int r)
{
    node *root;
    if(i==N || pre[i]>r)
    return NULL;
    root=new node(pre[i]);
    i++;
    root->left=bulid(pre, N, i, root->data);
    root->right=bulid(pre, N, i, r);
    return root;
}