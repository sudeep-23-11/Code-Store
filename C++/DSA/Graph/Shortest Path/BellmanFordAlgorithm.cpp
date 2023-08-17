//SingleSourceShortestPath
//BellmanFordAlgorithm
#include<iostream>
#include<climits>
using namespace std;
struct edge
{
    int u, v, wt;
};
int main()
{
    int i, j, N, M, u, v, wt;
    cin>>N>>M;
    int dist[N+1];
    edge e[N+1];
    for(i=1;i<=N;i++)
    dist[i]=INT_MAX;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    dist[1]=0;
    for(i=1;i<N;i++)
    {
        for(j=1;j<=M;j++)
        {
            if(dist[e[j].u]!=INT_MAX && dist[e[j].v] > dist[e[j].u]+e[j].wt)
            dist[e[j].v]=dist[e[j].u]+e[j].wt;
        }
    }
    for(i=1;i<=N;i++)
    cout<<i<<" -> "<<dist[i]<<endl;
    cout<<endl;
    return 0;
}