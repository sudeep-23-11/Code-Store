//UsingDFS
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], int color[], bool &b);
int main()
{
    bool b;
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    int color[n+1];
    b=false;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            color[i]=0;
            DFS(i, adj, vis, color, b);
        }
    }
    if(b==true)
    cout<<"Not a Bipartite graph"<<endl;
    else
    cout<<"Bipartite graph"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], int color[], bool &b)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        {
            color[i]=!color[n];
            DFS(i, adj, vis, color, b);
        }
        else if(color[i]==color[n])
        b=true;
    }
}