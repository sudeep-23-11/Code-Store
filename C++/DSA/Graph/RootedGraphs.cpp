//RootedGraphs
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int dist[100001];
int size[100001];
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(dist, -1, sizeof(dist));
    memset(size, -1, sizeof(size));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cin>>u;
    dist[u]=0;
    DFS(1);
    for(i=1;i<=n;i++)
    cout<<i<<" "<<dist[i]<<" "<<size[i]<<endl;
    return 0;
}
void DFS(int n)
{
    size[n]=1;
    for(auto i:adj[n])
    {
        dist[i]=dist[n]+1;
        DFS(i);
        size[n]+=size[i];
    }
}