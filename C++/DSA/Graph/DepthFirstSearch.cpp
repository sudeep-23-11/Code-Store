//DepthFirstSearch
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i);
    }
    return 0;
}
void DFS(int n)
{
    vis[n]=true;
    cout<<n<<" ";
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i);
    }
}