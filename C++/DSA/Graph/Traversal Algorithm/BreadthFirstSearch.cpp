//BreadthFirstSearch
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>adj[], bool vis[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        BFS(i, adj, vis);
    }
    return 0;
}
void BFS(int n, vector<int>adj[], bool vis[])
{
    queue<int>q;
    q.push(n);
    vis[n]=true;
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        cout<<n<<" ";
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                q.push(i);
                vis[i]=true;
            }
        }
    }
}