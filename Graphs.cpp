//Graphs
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
int dist[100001];
void BFS(int n);
int main()
{
    int i, n, m, x, y, no;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>no;
    memset(dist, -1, sizeof(dist));
    dist[no]=0;
    BFS(no);
    for(i=1;i<100001;i++)
    {
        if(dist[i]!=(-1))
        cout<<i<<" -> "<<dist[i]<<endl;
    }
    return 0;
}
void BFS(int n)
{
    vis[n]=true;
    queue<int>q;
    q.push(n);
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                vis[i]=true;
                dist[i]=dist[n]+1;
                q.push(i);
            }
        }
    }
}