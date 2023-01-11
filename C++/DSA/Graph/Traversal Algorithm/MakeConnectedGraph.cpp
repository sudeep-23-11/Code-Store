//MakeConnectedGraph
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[]);
int main()
{
    int i, n, m, u, v, c;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    c=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            c++;
            DFS(i, adj, vis);
        }
    }
    cout<<(c-1)<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[])
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i, adj, vis);
    }
}