//BipartiteGraph
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], bool color[], bool &b);
void BFS(int n, vector<int>adj[], bool vis[], bool color[], bool &b);
int main()
{
    bool b;
    int i, N, M, u, v;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false}, color[N+1];
    b=false;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    color[1]=false;
    DFS(1, adj, vis, color, b);
    vis[N+1]={false};
    b=false;
    color[1]=false;
    BFS(1, adj, vis, color, b);
    if(!b)
    cout<<"Bipartite graph"<<endl;
    else
    cout<<"Not a Bipartite graph"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], bool color[], bool &b)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(!vis[i])
        {
            color[i]=!color[n];
            DFS(i, adj, vis, color, b);
        }
        else if(color[i]==color[n])
        b=true;
    }
}
void BFS(int n, vector<int>adj[], bool vis[], bool color[], bool &b)
{
    queue<int>q;
    q.push(n);
    vis[n]=true;
    while(!q.empty())
    {
        n=q.front();
        q.pop();
        for(auto i:adj[n])
        {
            if(!vis[i])
            {
                q.push(i);
                vis[i]=true;
                color[i]=!color[n];
            }
            else if(color[i]==color[n])
            b=true;
        }
    }
}