//DisjointSet
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int _rank[], int parent[]); 
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    int _rank[n+1]={0};
    int parent[n+1];
    for(i=1;i<=n;i++)
    parent[i]=i;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        _union(u, v, _rank, parent);
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
void _union(int u, int v, int _rank[], int parent[])
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