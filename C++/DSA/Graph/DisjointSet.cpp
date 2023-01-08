//DisjointSet
#include<iostream>
using namespace std;
void makeset(int n, int parent[], int _rank[]);
int findparent(int n, int parent[]);
void _union(int u, int v, int parent[], int _rank[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    int parent[n+1];
    int _rank[n+1];
    makeset(n, parent, _rank);
    for(i=1;i<=m;i++)
    {
        cout<<"Make union"<<endl;
        cin>>u>>v;
        _union(u, v, parent, _rank);
        cout<<"Check components"<<endl;
        cin>>u>>v;
        if(findparent(u, parent)==findparent(v, parent))
        cout<<"Same component"<<endl;
        else
        cout<<"Different components"<<endl;
    }
    return 0;
}
void makeset(int n, int parent[], int _rank[])
{
    int i;
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        _rank[i]=0;
    }
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
    else
    return parent[n]=findparent(parent[n], parent);
}
void _union(int u, int v, int parent[], int _rank[])
{
    u=findparent(u, parent);
    v=findparent(v, parent);
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