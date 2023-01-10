//NumberOfWaysToArrive
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i, n, m, u, v, wt;
    cin>>n>>m;
    vector<pair<int, int>>adj[n+1];
    int dist[n+1];
    int ways[n+1];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    for(i=1;i<=n;i++)
    dist[i]=100001;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
    dist[1]=0;
    ways[1]=1;
    q.push(make_pair(0, 1));
    while(q.empty()==0)
    {
        u=q.top().second;
        q.pop();
        for(auto j:adj[u])
        {
            if(dist[j.first]>(dist[u]+j.second))
            {
                dist[j.first]=dist[u]+j.second;
                ways[j.first]=ways[u];
                q.push(make_pair(dist[j.first], j.first));
            }
            else if(dist[j.first]==(dist[u]+j.second))
            ways[j.first]+=ways[u];
        }
    }
    cout<<ways[n]<<endl;
    return 0;
}