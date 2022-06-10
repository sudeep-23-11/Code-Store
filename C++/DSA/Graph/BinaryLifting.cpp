//BinaryLifting
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int parent[100001][20];
int intime[100001];
int outtime[100001];
int t;
void DFS(int n, int p);
bool ancestor(int u, int v);
int lca(int u, int v);
int kthancestor(int n, int k);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(parent, -1, sizeof(parent));
    memset(intime, -1, sizeof(intime));
    memset(outtime, -1, sizeof(outtime));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    t=0;
    DFS(1, -1);
    cin>>u>>v;
    cout<<lca(u, v)<<endl;
    cin>>u>>v;
    cout<<kthancestor(u, v)<<endl;
    return 0;
}
void DFS(int n, int p)
{
    int i;
    parent[n][0]=p;
    t++;
    intime[n]=t;
    for(i=1;i<20;i++)
    {
        if(parent[n][i-1]==-1)
        parent[n][i]=-1;
        else
        parent[n][i]=parent[parent[n][i-1]][i-1];
    }
    for(auto j:adj[n])
    DFS(j, n);
    outtime[n]=t;
}
bool ancestor(int u, int v)
{
    if((intime[u]<=intime[v])&&(outtime[u]>=outtime[v]))
    return true;
    else
    return false;
}
int lca(int u, int v)
{
    int i;
    if(ancestor(u, v)==1)
    return u;
    else if(ancestor(v, u)==1)
    return v;
    else
    {
        for(i=19;i>=0;i--)
        {
            if((parent[u][i]!=-1)&&(ancestor(parent[u][i], v)==0))
            u=parent[u][i];
        }
        return parent[u][0];
    }
}
int kthancestor(int n, int k)
{
    int i;
    if(k==0)
    return n;
    else
    {
        for(i=0;i<20;i++)
        {
            if((k>>i)&1!=0)
            n=parent[n][i];
            if(n==-1)
            return n;
        }
        return n;
    }
}