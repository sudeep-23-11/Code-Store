//DisjointSet
#include<iostream>
using namespace std;
int parent[100001];
int _rank[100001];
void makeset(int n);
int findparent(int n);
void _union(int u, int v);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    makeset(n);
    for(i=1;i<=m;i++)
    {
        cout<<"Make union"<<endl;
        cin>>u>>v;
        _union(u, v);
        cout<<"Check components"<<endl;
        cin>>u>>v;
        if(findparent(u)==findparent(v))
        cout<<"Same component"<<endl;
        else
        cout<<"Different components"<<endl;
    }
    return 0;
}
void makeset(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        _rank[i]=0;
    }
}
int findparent(int n)
{
    if(parent[n]==n)
    return n;
    else
    return parent[n]=findparent(parent[n]);
}
void _union(int u, int v)
{
    u=findparent(u);
    v=findparent(v);
    if(_rank[u]<_rank[v])
    parent[u]=v;
    else if(_rank[u]>_rank[v])
    parent[v]=u;
    else
    {
        parent[v]=u;
        _rank[u]++;
    }
}