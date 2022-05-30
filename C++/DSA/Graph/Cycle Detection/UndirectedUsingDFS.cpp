//UndirectedUsingDFS
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool c;
void DFS(int n, int p);
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
        DFS(i, -1);
    }
    if(c==true)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
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
        {
            c=true;
            return;
        }
    }
}