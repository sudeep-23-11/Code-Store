//MaximumStonesRemoval
#include<iostream>
#include<set>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int _size[], int parent[]);
int main()
{
    int i, j, N, M, c1, c2;
    cin>>N>>M;
    int A[N][M];
    int _size[N+M+1];
    int parent[N+M+1];
    set<int>st;
    for(i=1;i<=(N+M);i++)
    {
        _size[i]=1;
        parent[i]=i;
    }
    c1=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            c1++;
            if((A[i][j]==1)&&(findparent((i+1), parent)!=findparent((N+j+1), parent)))
            {
                _union((i+1), (N+j+1), _size, parent);
                st.insert(i+1);
                st.insert(N+j+1);
            }
        }
    }
    c2=0;
    for(auto x:st)
    {
        if(findparent(x, parent)==x)
        c2++;
    }
    cout<<(c1-c2)<<endl;
    return 0;
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
    else
    return parent[n]=findparent(parent[n], parent);
}
void _union(int u, int v, int _size[], int parent[])
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