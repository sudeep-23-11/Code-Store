#include<iostream>
using namespace std;
int build(int l, int r, int A[], int id, int st[]);
int query(int i, int j, int l, int r, int id, int st[], int lt[]);
int update(int i, int j, int v, int l, int r, int id, int st[], int lt[]);
int main()
{
    int i, j, N, v, Q;
    cin>>N;
    int A[N], st[N*4], lt[N*4]={0};
    for(i=0;i<N;i++)
    cin>>A[i];
    build(0, N-1, A, 0, st);
    cout<<"Range update"<<endl;
    cin>>i>>j>>v;
    update(i, j, v, 0, N-1, 0, st, lt);
    cout<<"Queries"<<endl;
    cin>>Q;
    while(Q--)
    {
        cin>>i>>j;
        cout<<query(i, j, 0, N-1, 0, st, lt)<<endl;
    }
    return 0;
}
int build(int l, int r, int A[], int id, int st[])
{
    int m, s;
    if(l==r)
    return st[id]=A[l];
    m=(l+r)/2;
    s=build(l, m, A, id*2+1, st)+build(m+1, r, A, id*2+2, st);
    return st[id]=s;
}
int query(int i, int j, int l, int r, int id, int st[], int lt[])
{
    int m, s;
    if(lt[id])
    {
        st[id]+=lt[id]*(r-l+1);
        if(l<r)
        {
            lt[id*2+1]+=lt[id];
            lt[id*2+2]+=lt[id];
        }
        lt[id]=0;
    }
    if(i<=l && r<=j)
    return st[id];
    if(r<i || j<l)
    return 0;
    m=(l+r)/2;
    s=query(i, j, l, m, id*2+1, st, lt)+query(i, j, m+1, r, id*2+2, st, lt);
    return s;
}
int update(int i, int j, int v, int l, int r, int id, int st[], int lt[])
{
    int m, s;
    if(lt[id])
    {
        st[id]+=lt[id]*(r-l+1);
        if(l<r)
        {
            lt[id*2+1]+=lt[id];
            lt[id*2+2]+=lt[id];
        }
        lt[id]=0;
    }
    if(i<=l && r<=j)
    {
        if(l<r)
        {
            lt[id*2+1]+=v;
            lt[id*2+2]+=v;
        }
        return st[id]+=v*(r-l+1);
    }
    if(r<i || j<l)
    return st[id];
    m=(l+r)/2;
    s=update(j, i, v, l, m, id*2+1, st, lt)+update(i, j, v, m+1, r, id*2+2, st, lt);
    return st[id]=s;
}