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
struct edge e[100001];
bool cmp(struct edge a, struct edge b)
{
    return (a.wt<b.wt);
}
int parent[100001];
int _rank[100001];
int findparent(int n);
void _union(int u, int v);
int main()
{
    int i, n, m, u, v, wt;;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    sort(e+1, e+m+1, cmp);
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        _rank[i]=0;
    }
    for(i=1;i<=m;i++)
    {
        if(findparent(e[i].u)!=findparent(e[i].v))
        {
            cout<<e[i].u<<" - "<<e[i].v<<endl;
            _union(e[i].u, e[i].v);
        }
    }
    return 0;
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