//BinaryLifting
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int parent[100001][20];
int intime[100001];
int outtime[100001];
int t=0;
void DFS(int n, int p);
bool ancestor(int x, int y);
int lca(int x, int y);
int kthancestor(int n, int k);
int main()
{
    int i, n, q, x, y, l, k;
    cin>>n;
    memset(parent, -1, sizeof(parent));
    memset(intime, -1, sizeof(intime));
    memset(outtime, -1, sizeof(outtime));
    for(i=1;i<=(n-1);i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(1, -1);
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>x>>y;
        l=lca(x, y);
        cout<<l<<endl;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>x>>y;
        k=kthancestor(x, y);
        cout<<k<<endl;
    }
    return 0;
}
void DFS(int n, int p)
{
    parent[n][0]=p;
    t++;
    intime[n]=t;
    for(int i=1;i<20;i++)
    {
        if(parent[n][i-1]==-1)
        parent[n][i]=-1;
        else
        parent[n][i]=parent[parent[n][i-1]][i-1];
    }
    for(auto i:adj[n])
    DFS(i, n);
    outtime[n]=t;
}
bool ancestor(int x, int y)
{
    if((intime[x]<=intime[y])&&(outtime[x]>=outtime[y]))
    return true;
    else
    return false;
}
int lca(int x, int y)
{
    if(ancestor(x, y)==1)
    return x;
    else if(ancestor(y, x)==1)
    return y;
    else
    {
        for(int i=19;i>=0;i--)
        {
            if((parent[x][i]!=-1)&&(ancestor(parent[x][i], y)==0))
            x=parent[x][i];
        }
        return parent[x][0];
    }
}
int kthancestor(int n, int k)
{
    if(k==0)
    return n;
    else
    {
        for(int i=0;i<20;i++)
        {
            if((k>>i)&1!=0)
            n=parent[n][i];
            if(n==-1)
            return n;
        }
        return n;
    }
}