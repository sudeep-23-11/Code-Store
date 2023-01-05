//UndirectedUsingDFS
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], int p, bool &c);
int main()
{
    bool c;
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
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
        DFS(i, adj, vis, -1, c);
    }
    if(c==true)
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
        if(vis[i]==false)
        DFS(i, adj, vis, n, c);
        else if(i!=p)
        c=true;
    }
}