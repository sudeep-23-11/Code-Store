//NumberOfIslandsII
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int _rank[], int parent[]);
int main()
{
    int i, j, N, M, q, c, x, y;
    cin>>N>>M;
    int A[N][M]={0};
    int _rank[(N*M)+1]={0};
    int parent[(N*M)+1];
    for(i=1;i<=(N*M);i++)
    parent[i]=i;
    cin>>q;
    c=0;
    while(q--)
    {
        cin>>x>>y;
        if(A[x][y]==1)
        goto l;
        A[x][y]=1;
        c++;
        for(i=x-1;i<=(x+1);i++)
        {
            for(j=y-1;j<=(y+1);j++)
            {
                if((i>=0)&&(i<N)&&(j>=0)&&(j<M)&&((i==x)||(j==y))&&(A[i][j]==1))
                {
                    if(findparent((i*M+j+1), parent)!=findparent((x*M+y+1), parent))
                    {
                        _union((i*M+j+1), (x*M+y+1), _rank, parent);
                        c--;
                    }
                }
            }
        }
        l: cout<<c<<endl;
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