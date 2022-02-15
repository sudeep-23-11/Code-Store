//UndirectedGraphCycle
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool c=false;
void DFS(int n, int p);
int main()
{
    int i, n, m, x, y;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i, -1);
    }
    if(c==true)
    cout<<"Undirected Cyclic graph"<<endl;
    else
    cout<<"Undirected Acyclic graph"<<endl;
    return 0;
}
void DFS(int n, int p)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i, n);
        else if((vis[i]==true)&&(i!=p))
        c=true;
    }
}