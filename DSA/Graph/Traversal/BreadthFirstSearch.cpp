//BreadthFirstSearch
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>adj[], bool vis[]);
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
        BFS(i, adj, vis);
    }
    cout<<endl;
    return 0;
}
void BFS(int n, vector<int>adj[], bool vis[])
{
    queue<int>q;
    q.push(n);
    vis[n]=true;
    while(!q.empty())
    {
        n=q.front();
        q.pop();
        cout<<n<<" ";
        for(auto i:adj[n])
        {
            if(!vis[i])
            {
                q.push(i);
                vis[i]=true;
            }
        }
    }
}