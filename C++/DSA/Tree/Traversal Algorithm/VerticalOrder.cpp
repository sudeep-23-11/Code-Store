//VerticalOrder
#include"../T.h"
#include<map>
#include<set>
map<int, map<int, multiset<int>>>m;
void preorder(struct node *n, int v, int l);
int main()
{
    root=construct();
    preorder(root, 0, 1);
    for(auto i:m)
    {
        for(auto j:i.second)
        {
            for(auto k:j.second)
            cout<<k<<" ";
        }
    }
    return 0;
}
void preorder(struct node *n, int v, int l)
{
    if(n==NULL)
    return;
    m[v][l].insert(n->data);
    preorder(n->left, v-1, l+1);
    preorder(n->right, v+1, l+1);
}