//SingleSourceShortestPath
//BellmanFordAlgorithm
#include<iostream>
using namespace std;
struct edge
{
    int u;
    int v;
    int wt;
};
int main()
{
    int i, j, n, m, u, v, wt;
    cin>>n>>m;
    int dist[n+1];
    struct edge e[n+1];
    for(i=1;i<=n;i++)
    dist[i]=100001;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    dist[1]=0;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(dist[e[j].v]>(dist[e[j].u]+e[j].wt))
            dist[e[j].v]=dist[e[j].u]+e[j].wt;
        }
    }
    for(i=1;i<=n;i++)
    cout<<i<<" -> "<<dist[i]<<endl;
    return 0;
}