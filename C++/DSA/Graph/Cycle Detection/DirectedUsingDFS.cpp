//DirectedUsingDFS
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], bool pathvis[], bool &c);
int main()
{
    bool c;
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    bool pathvis[n+1]={false};
    c=false;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i, adj, vis, pathvis, c);
    }
    if(c==true)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], bool pathvis[], bool &c)
{
    vis[n]=true;
    pathvis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i, adj, vis, pathvis, c);
        else if(pathvis[i]==true)
        c=true;
    }
    pathvis[n]=false;
}