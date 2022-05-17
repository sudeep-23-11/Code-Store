//CycleInDirected
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool cycle[100001];
bool c=false;
void DFS(int n);
int main()
{
    int i, n, m, x, y;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    memset(cycle, false, sizeof(cycle));
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i);
    }
    if(c==true)
    cout<<"Cyclic present"<<endl;
    else
    cout<<"Cyclic not present"<<endl;
    return 0;
}
void DFS(int n)
{
    vis[n]=true;
    cycle[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i);
        else if((vis[i]==true)&&(cycle[i]==true))
        c=true;
    }
    cycle[n]=false;
}