//DepthFirstSearch
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[]);
int main()
{
    int i, N, M, u, v;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false};
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=N;i++)
    {
        if(!vis[i])
        DFS(i, adj, vis);
    }
    cout<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[])
{
    vis[n]=true;
    cout<<n<<" ";
    for(auto i:adj[n])
    {
        if(!vis[i])
        DFS(i, adj, vis);
    }
}