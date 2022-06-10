//LowestCommonAncestor
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
vector<int>adj[100001];
int parent[100001];
void DFS(int n, int p);
int lca(int u, int v);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(parent, -1, sizeof(parent));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    DFS(1, -1);
    cin>>u>>v;
    cout<<lca(u, v)<<endl;
    return 0;
}
void DFS(int n, int p)
{
    parent[n]=p;
    for(auto i:adj[n])
    DFS(i, n);
}
int lca(int u, int v)
{
    int i, lca;
    vector<int>a, b;
    i=u;
    while(i!=-1)
    {
        a.push_back(i);
        i=parent[i];
    }
    i=v;
    while(i!=-1)
    {
        b.push_back(i);
        i=parent[i];
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(i=0;i<min(a.size(), b.size());i++)
    {
        if(a.at(i)==b.at(i))
        lca=a.at(i);
        else
        break;
    }
    return lca;
}