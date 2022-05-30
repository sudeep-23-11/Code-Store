//UsingBFS
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool color[100001];
bool c;
void BFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    c=false;
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
    if(c==true)
    cout<<"Not a Bipartite graph"<<endl;
    else
    cout<<"Bipartite graph"<<endl;
    return 0;
}
void BFS(int n)
{
    queue<int>q;
    q.push(n);
    vis[n]=true;
    color[n]=false;
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                q.push(i);
                vis[i]=true;
                color[i]=!color[n];
            }
            else if((vis[i]==true)&&(color[i]==color[n]))
            {
                c=true;
                return;
            }
        }
    }
}