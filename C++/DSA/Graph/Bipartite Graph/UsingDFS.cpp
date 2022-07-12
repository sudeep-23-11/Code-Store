//UsingDFS
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool color[100001];
bool b;
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
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
            color[i]=false;
            DFS(i);
        }
    }
    if(b==true)
    cout<<"Not a Bipartite graph"<<endl;
    else
    cout<<"Bipartite graph"<<endl;
    return 0;
}
void DFS(int n)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        {
            color[i]=!color[n];
            DFS(i);
        }
        else if(color[i]==color[n])
        b=true;
    }
}