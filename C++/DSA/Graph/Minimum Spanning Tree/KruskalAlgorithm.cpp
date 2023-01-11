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
int findparent(int n, int parent[]);
void _union(int u, int v, int _rank[], int parent[]); 
int main()
{
    int i, n, m, u, v, wt;;
    cin>>n>>m;
    int _rank[n+1]={0};
    int parent[n+1];
    struct edge e[n+1];
    for(i=1;i<=n;i++)
    parent[i]=i;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    sort(e+1, e+m+1, cmp);
    for(i=1;i<=m;i++)
    {
        if(findparent(e[i].u, parent)!=findparent(e[i].v, parent))
        {
            cout<<e[i].u<<" - "<<e[i].v<<endl;
            _union(e[i].u, e[i].v, _rank, parent);
        }
    }
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
    if(_rank[parent[u]]>_rank[parent[v]])
    parent[v]=u;
    else if(_rank[parent[u]]<_rank[parent[v]])
    parent[u]=v;
    else
    {
        _rank[u]++;
        parent[v]=u;
    }
}