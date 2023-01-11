//DistanceFromRootAndSubtreeSize
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], int dist[], int _size[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    int dist[n+1]={-1};
    int _size[n+1]={-1};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    dist[1]=0;
    DFS(1, adj, dist, _size);
    for(i=1;i<=n;i++)
    cout<<i<<" "<<dist[i]<<" "<<_size[i]<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], int dist[], int _size[])
{
    _size[n]=1;
    for(auto i:adj[n])
    {
        dist[i]=dist[n]+1;
        DFS(i, adj, dist, _size);
        _size[n]+=_size[i];
    }
}