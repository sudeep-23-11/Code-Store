//KruskalAlgorithm
#include<iostream>
#include<algorithm>
using namespace std;
struct edge
{
    int u, v, wt;
};
bool cmp(edge a, edge b) {return a.wt<b.wt;}
int findparent(int n, int parent[]);
void _union(int u, int v, int _rank[], int parent[]); 
int main()
{
    int i, N, M, u, v, wt;;
    cin>>N>>M;
    int _rank[N+1]={0}, parent[N+1];
    edge e[N+1];
    for(i=1;i<=N;i++)
    parent[i]=i;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        e[i].u=u;
        e[i].v=v;
        e[i].wt=wt;
    }
    sort(e+1, e+M+1, cmp);
    for(i=1;i<=M;i++)
    {
        if(findparent(e[i].u, parent)!=findparent(e[i].v, parent))
        {
            cout<<e[i].u<<" - "<<e[i].v<<endl;
            _union(e[i].u, e[i].v, _rank, parent);
        }
    }
    cout<<endl;
    return 0;
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
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