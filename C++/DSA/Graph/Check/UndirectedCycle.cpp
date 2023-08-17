//UndirectedCycle
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], int p, bool &c);
void BFS(int n, vector<int>adj[], bool vis[], int p, bool &c);
int main()
{
    bool c;
    int i, N, M, u, v;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false};
    c=false;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1, adj, vis, -1, c);
    vis[N+1]={false};
    c=false;
    BFS(1, adj, vis, -1, c);
    if(c)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], int p, bool &c)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(!vis[i])
        DFS(i, adj, vis, n, c);
        else if(i!=p)
        c=true;
    }
}
void BFS(int n, vector<int>adj[], bool vis[], int p, bool &c)
{
    queue<pair<int, int>>q;
    q.push({n, p});
    vis[n]=true;
    while(!q.empty())
    {
        n=q.front().first;
        p=q.front().second;
        q.pop();
        for(auto i:adj[n])
        {
            if(!vis[i])
            {
                q.push({i, n});
                vis[i]=true;
            }
            else if(i!=p)
            c=true;
        }
    }
}