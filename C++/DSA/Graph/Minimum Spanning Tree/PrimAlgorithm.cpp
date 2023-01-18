//PrimAlgorithm
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i, n, m, u, v, wt;
    cin>>n>>m;
    vector<pair<int, int>>adj[n+1];
    int key[n+1];
    bool mst[n+1]={false};
    int parent[n+1];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    for(i=1;i<=n;i++)
    key[i]=100001;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
    key[1]=0;
    q.push(make_pair(0, 1));
    while(q.empty()==0)
    {
        u=q.top().second;
        q.pop();
        if(mst[u]==true)
        continue;
        mst[u]=true;
        for(auto j:adj[u])
        {
            if((mst[j.first]==false)&&(key[j.first]>j.second))
            {
                key[j.first]=j.second;
                parent[j.first]=u;
                q.push(make_pair(key[j.first], j.first));
            }
        }
    }
    for(i=2;i<=n;i++)
    cout<<parent[i]<<" - "<<i<<endl;
    return 0;
}