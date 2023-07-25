//MaximumWidth
#include"../BT.h"
#include<queue>
#include<vector>
int main()
{
    int i, l, id, fid, m;
    queue<pair<node *, int>>q;
    vector<int>v;
    node *n;
    root=construct();
    m=0;
    q.push({root, 0});
    while(!q.empty())
    {
        l=q.size();
        fid=q.front().second;
        for(i=0;i<l;i++)
        {
            n=q.front().first;
            id=q.front().second-fid;
            q.pop();
            v.push_back(id);
            if(n->left)
            q.push({n->left, id*2});
            if(n->right)
            q.push({n->right, id*2+1});
        }
        m=max(m, v[l-1]+1);
        v.clear();
    }
    cout<<m<<endl;
    return 0;
}