//BreadthFirstSearch
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
void BFS(int n);
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
        BFS(i);
    }
    return 0;
}
void BFS(int n)
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