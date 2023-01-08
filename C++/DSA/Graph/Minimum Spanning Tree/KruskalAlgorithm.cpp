//KruskalAlgorithm
#include<iostream>
#include<algorithm>
using namespace std;
struct edge
{
    int u;
    int v;
    int wt;
};
bool cmp(struct edge a, struct edge b) {return (a.wt<b.wt);}
void makeset(int n, int parent[], int _rank[]);
int findparent(int n, int parent[]);
void _union(int u, int v, int parent[], int _rank[]);
int main()
{
    int i, n, m, u, v, wt;;
    cin>>n>>m;
    int parent[n+1];
    int _rank[n+1];
    struct edge e[n+1];
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    sort(e+1, e+m+1, cmp);
    makeset(n, parent, _rank);
    for(i=1;i<=m;i++)
    {
        if(findparent(e[i].u, parent)!=findparent(e[i].v, parent))
        {
            cout<<e[i].u<<" - "<<e[i].v<<endl;
            _union(e[i].u, e[i].v, parent, _rank);
        }
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