//CheapestFlightsWithinKStops
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int main()
{
    int i, N, M, u, v, wt, s, d, k, n, _d, s;
    cin>>N>>M;
    vector<pair<int, int>>adj[N+1];
    int dist[N+1];
    queue<vector<int>>q;
    for(i=1;i<=N;i++)
    dist[i]=INT_MAX;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back({v, wt});
    }
    cin>>s>>d>>k;
    dist[s]=0;
    q.push({0, 0, s});
    while(!q.empty())
    {
        s=q.front()[0];
        _d=q.front()[1];
        n=q.front()[2];
        q.pop();
        if(s==k+1)
        continue;
        for(auto j:adj[n])
        {
            if(dist[j.first] > _d+j.second)
            {
                dist[j.first]=_d+j.second;
                q.push({s+1, dist[j.first], j.first});
            }
        }
    }
    cout<<dist[d]<<endl;
    return 0;
}