//DisjointSet
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void unionbyrank(int u, int v, int parent[], int _rank[]);
void unionbysize(int u, int v, int parent[], int _size[]);
int main()
{
    int i, N, M, u, v;
    cin>>N>>M;
    int parent[N+1], _rank[N+1]={0}, _size[N+1];
    for(i=1;i<=N;i++)
    {
        _size[i]=1;
        parent[i]=i;
    }
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        unionbyrank(u, v, parent, _rank);
        // unionbysize(u, v, parent, _size);
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
    return parent[n]=findparent(parent[n], parent);
}
void unionbyrank(int u, int v, int parent[], int _rank[])
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
void unionbysize(int u, int v, int parent[], int _size[])
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