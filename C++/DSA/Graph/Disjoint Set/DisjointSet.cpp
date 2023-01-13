//DisjointSet
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void unionbyrank(int u, int v, int _rank[], int parent[]);
void unionbysize(int u, int v, int _size[], int parent[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    int _rank[n+1]={0};
    int _size[n+1];
    int parent[n+1];
    for(i=1;i<=n;i++)
    {
        _size[i]=1;
        parent[i]=i;
    }
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        unionbyrank(u, v, _rank, parent);
        // unionbysize(u, v, _size, parent);
    }
    cin>>u>>v;
    if(findparent(u, parent)==findparent(v, parent))
    cout<<"Same component"<<endl;
    else
    cout<<"Different components"<<endl;
    return 0;
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
    else
    return parent[n]=findparent(parent[n], parent);
}
void unionbyrank(int u, int v, int _rank[], int parent[])
{
    u=findparent(u, parent);
    v=findparent(v, parent);
    if(_rank[u]>_rank[v])
    parent[v]=u;
    else if(_rank[u]<_rank[v])
    parent[u]=v;
    else
    {
        _rank[u]++;
        parent[v]=u;
    }
}
void unionbysize(int u, int v, int _size[], int parent[])
{
    u=findparent(u, parent);
    v=findparent(v, parent);
    if(_size[u]>=_size[v])
    {
        _size[u]+=_size[v];
        parent[v]=u;
    }
    else
    {
        _size[v]+=_size[u];
        parent[u]=v;
    }
}