//VerticalOrder
#include"../BT.h"
#include<map>
#include<set>
void preorder(node *n, int v, int l, map<int, map<int, multiset<int>>>&m);
int main()
{
    root=construct();
    map<int, map<int, multiset<int>>>m;
    preorder(root, 0, 1, m);
    for(auto i:m)
    {
        for(auto j:i.second)
        {
            for(auto k:j.second)
            cout<<k<<" ";
        }
    }
    cout<<endl;
    return 0;
}
void preorder(node *n, int v, int l, map<int, map<int, multiset<int>>>&m)
{
    if(!n)
    return;
    m[v][l].insert(n->data);
    preorder(n->left, v-1, l+1, m);
    preorder(n->right, v+1, l+1, m);
}