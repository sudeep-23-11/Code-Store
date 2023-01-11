//BinaryLifting
#include<iostream>
#include<vector>
using namespace std;
int t;
void DFS(int n, int p, vector<int>adj[], int parent[][20], int intime[], int outtime[]);
bool ancestor(int u, int v, int intime[], int outtime[]);
int lca(int u, int v, int parent[][20], int intime[], int outtime[]);
int kthancestor(int n, int k, int parent[][20]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    int parent[n+1][20]={-1};
    int intime[n+1]={-1};
    int outtime[n+1]={-1};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    t=0;
    DFS(1, -1, adj, parent, intime, outtime);
    cin>>u>>v;
    cout<<lca(u, v, parent, intime, outtime)<<endl;
    cin>>u>>v;
    cout<<kthancestor(u, v, parent)<<endl;
    return 0;
}
void DFS(int n, int p, vector<int>adj[], int parent[][20], int intime[], int outtime[])
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
    DFS(j, n, adj, parent, intime, outtime);
    outtime[n]=t;
}
bool ancestor(int u, int v, int intime[], int outtime[])
{
    if((intime[u]<=intime[v])&&(outtime[u]>=outtime[v]))
    return true;
    else
    return false;
}
int lca(int u, int v, int parent[][20], int intime[], int outtime[])
{
    int i;
    if(ancestor(u, v, intime, outtime)==1)
    return u;
    else if(ancestor(v, u, intime, outtime)==1)
    return v;
    else
    {
        for(i=19;i>=0;i--)
        {
            if((parent[u][i]!=-1)&&(ancestor(parent[u][i], v, intime, outtime)==0))
            u=parent[u][i];
        }
        return parent[u][0];
    }
}
int kthancestor(int n, int k, int parent[][20])
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