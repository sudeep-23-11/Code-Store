//MakeLargeIsland
#include<iostream>
#include<set>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int _size[], int parent[]);
int main()
{
    int i, j, N, M, c, m, x, y;
    cin>>N>>M;
    int A[N][M];
    int _size[(N*M)+1];
    int parent[(N*M)+1];
    set<int>st;
    for(i=1;i<=(N*M);i++)
    {
        _size[i]=1;
        parent[i]=i;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    for(x=0;x<N;x++)
    {
        for(y=0;y<M;y++)
        {
            if(A[x][y]==1)
            {
                for(i=x-1;i<=(x+1);i++)
                {
                    for(j=y-1;j<=(y+1);j++)
                    {
                        if((i>=0)&&(i<N)&&(j>=0)&&(j<M)&&((i==x)||(j==y))&&(A[i][j]==1))
                        {
                            if(findparent((i*M+j+1), parent)!=findparent((x*M+y+1), parent))
                            _union((i*M+j+1), (x*M+y+1), _size, parent);
                        }
                    }
                }
            }
        }
    }
    m=0;
    for(x=0;x<N;x++)
    {
        for(y=0;y<M;y++)
        {
            if(A[x][y]==0)
            {
                for(i=x-1;i<=(x+1);i++)
                {
                    for(j=y-1;j<=(y+1);j++)
                    {
                        if((i>=0)&&(i<N)&&(j>=0)&&(j<M)&&((i==x)||(j==y))&&(A[i][j]==1))
                        st.insert(findparent((i*M+j+1), parent));
                    }
                }
                c=1;
                for(auto _x:st)
                c+=_size[_x];
                m=max(m, c);
                st.clear();
            }
        }
    }
    cout<<m<<endl;
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