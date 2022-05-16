//DijkstraAlgorithm
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<pair<int, int>>adj[100001];
int dist[100001];
int main()
{
    int i, n, m, x, y, w;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
    for(i=0;i<100001;i++)
    dist[i]=2147483647;
    dist[1]=0;
    priority_queue<pair<int, int>>pq;
    pq.push({0, 1});
    while(pq.empty()==0)
    {
        auto temp=pq.top();
        for(auto i:adj[temp.second])
        {
            if(dist[i.first]>(dist[temp.second]+i.second))
            {
                dist[i.first]=dist[temp.second]+i.second;
                pq.push({(dist[i.first]*(-1)), i.first});
            }
        }
        pq.pop();
    }
    for(i=1;i<100001;i++)
    {
        if(dist[i]!=2147483647)
        cout<<i<<" -> "<<dist[i]<<endl;
    }
    return 0;
}