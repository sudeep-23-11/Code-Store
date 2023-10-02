//RegionsCutBySlashes
#include<iostream>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int parent[], int _rank[]);
int main()
{
    int i, j, N, u, v, c;
    string s;
    cin>>N;
    N++;
    int parent[N*N], _rank[N*N]={0};
    for(i=0;i<N*N;i++)
    parent[i]=i;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(!i || !j || i==N-1 || j==N-1)
            {
                if(!i && !j)
                continue;
                _union(0, i*N+j, parent, _rank);
            }
        }
    }
    c=1;
    for(i=0;i<N-1;i++)
    {
        cin>>s;
        for(j=0;j<N-1;j++)
        {
            if(s[j]=='0')
            continue;
            else if(s[j]=='1')
            {
                u=i*N+j+1;
                v=(i+1)*N+j;
            }
            else
            {
                u=i*N+j;
                v=(i+1)*N+j+1;
            }
            if(findparent(u, parent)==findparent(v, parent))
            {
                c++;
                continue;
            }
            _union(u, v, parent, _rank);
        }
    }
    cout<<c<<endl;
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