//MaximumStonesRemoval
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int parent[], int _rank[]);
int main()
{
    int i, j, N, M, c1, c2;
    cin>>N>>M;
    int A[N][M];
    int parent[N+1], _rank[N+M+1]={0};
    for(i=1;i<=N+M;i++)
    parent[i]=i;
    c1=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            if(A[i][j])
            c1++;
            if(A[i][j] && findparent(i+1, parent)!=findparent(N+j+1, parent))
            _union(i+1, N+j+1, parent, _rank);
        }
    }
    c2=0;
    for(i=0;i<N+M;i++)
    {
        if(_rank[i] && parent[i]==i)
        c2++;
    }
    cout<<(c1-c2)<<endl;
    return 0;
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
    return parent[n]=findparent(parent[n], parent);
}
void _union(int u, int v, int parent[], int _rank[])
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