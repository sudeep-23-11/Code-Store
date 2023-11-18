//SingleSourceShortestPath
//DijkstraAlgorithm
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int main()
{
    int i, N, M, u, v, wt, n, d;
    cin>>N>>M;
    vector<pair<int, int>>adj[N+1];
    int dist[N+1];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    for(i=1;i<=N;i++)
    dist[i]=INT_MAX;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    dist[1]=0;
    q.push({0, 1});
    while(!q.empty())
    {
        d=q.top().first;
        n=q.top().second;
        q.pop();
        for(auto j:adj[n])
        {
            if(dist[j.first] > d+j.second)
            {
                dist[j.first]=d+j.second;
                q.push({dist[j.first], j.first});
            }
        }
    }
    for(i=1;i<=N;i++)
    cout<<i<<" -> "<<dist[i]<<endl;
    cout<<endl;
    return 0;
}