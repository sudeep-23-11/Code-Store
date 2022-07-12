//DirectedUsingDFS
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool dfsvis[100001];
bool c;
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    memset(dfsvis, false, sizeof(dfsvis));
    c=false;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i);
    }
    if(c==true)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void DFS(int n)
{
    vis[n]=true;
    dfsvis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i);
        else if(dfsvis[i]==true)
        c=true;
    }
    dfsvis[n]=false;
}