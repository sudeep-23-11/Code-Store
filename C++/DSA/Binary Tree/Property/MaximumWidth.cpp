//MaximumWidth
#include"../BT.h"
#include<queue>
int main()
{
    int l, id, fid, lid, m;
    queue<pair<node *, int>>q;
    node *n;
    root=construct();
    m=0;
    q.push({root, 0});
    while(!q.empty())
    {
        l=q.size();
        fid=q.front().second;
        while(l--)
        {
            n=q.front().first;
            id=q.front().second-fid;
            q.pop();
            lid=id;
            if(n->left)
            q.push({n->left, id*2});
            if(n->right)
            q.push({n->right, id*2+1});
        }
        m=max(m, lid+1);
    }
    cout<<m<<endl;
    return 0;
}