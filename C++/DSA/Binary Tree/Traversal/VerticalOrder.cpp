//VerticalOrder
#include"../BT.h"
#include<queue>
#include<map>
#include<vector>
int main()
{
    int v;
    node *n;
    map<int, vector<node *>>m;
    queue<pair<node *, int>>q;
    root=construct();
    q.push({root, 0});
    while(!q.empty())
    {
        n=q.front().first;
        v=q.front().second;
        q.pop();
        if(!m.count(v))
        m.insert({v, {n}});
        else
        m[v].push_back(n);
        if(n->left)
        q.push({n->left, v-1});
        if(n->right)
        q.push({n->right, v+1});
    }
    for(auto i:m)
    {
        for(auto j:i.second)
        cout<<j->data<<" ";
    }
    cout<<endl;
    return 0;
}