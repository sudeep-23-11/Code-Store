//PrimAlgorithm
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
vector<pair<int, int>>adj[100001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
int key[100001];
bool mst[100001];
int parent[100001];
int main()
{
    int i, n, m, u, v, wt;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
    for(i=0;i<100001;i++)
    key[i]=100001;
    memset(mst, false, sizeof(mst));
    memset(parent, -1, sizeof(parent));
    key[1]=0;
    pq.push(make_pair(0, 1));
    while(pq.empty()==0)
    {
        u=pq.top().second;
        pq.pop();
        if(mst[u]==true)
        continue;
        mst[u]=true;
        for(auto j:adj[u])
        {
            if((mst[j.first]==false)&&(key[j.first]>j.second))
            {
                key[j.first]=j.second;
                parent[j.first]=u;
                pq.push(make_pair(key[j.first], j.first));
            }
        }
    }
    for(i=2;i<=n;i++)
    cout<<parent[i]<<" - "<<i<<endl;
    return 0;
}