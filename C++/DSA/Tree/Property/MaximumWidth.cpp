//MaximumWidth
#include"../T.h"
#include<queue>
#include<vector>
queue<pair<struct node *, int>>q;
vector<int>v;
int main()
{
    int i, l, id, fid, m;
    struct node *n;
    root=construct();
    m=0;
    q.push(make_pair(root, 0));
    while(q.empty()==0)
    {
        l=q.size();
        fid=q.front().second;
        for(i=0;i<l;i++)
        {
            n=q.front().first;
            id=q.front().second-fid;
            q.pop();
            v.push_back(id);
            if(n->left!=NULL)
            q.push(make_pair(n->left, (id*2)));
            if(n->right!=NULL)
            q.push(make_pair(n->right, (id*2+1)));
        }
        m=max(m, (v[l-1]+1));
        v.clear();
    }
    cout<<m<<endl;
    return 0;
}