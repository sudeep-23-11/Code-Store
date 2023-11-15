#include<iostream>
using namespace std;
int build(int l, int r, int A[], int id, int st[]);
int query(int i, int j, int l, int r, int id, int st[]);
int update(int i, int v, int l, int r, int id, int st[]);
int main()
{
    int i, j, N, v, Q;
    cin>>N;
    int A[N], st[N*4];
    for(i=0;i<N;i++)
    cin>>A[i];
    build(0, N-1, A, 0, st);
    cout<<"Point update"<<endl;
    cin>>i>>v;
    update(i, v, 0, N-1, 0, st);
    cout<<"Queries"<<endl;
    cin>>Q;
    while(Q--)
    {
        cin>>i>>j;
        cout<<query(i, j, 0, N-1, 0, st)<<endl;
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
int query(int i, int j, int l, int r, int id, int st[])
{
    int m, s;
    if(i<=l && r<=j)
    return st[id];
    if(r<i || j<l)
    return 0;
    m=(l+r)/2;
    s=query(i, j, l, m, id*2+1, st)+query(i, j, m+1, r, id*2+2, st);
    return s;
}
int update(int i, int v, int l, int r, int id, int st[])
{
    int m, s;
    if(l==r && l==i)
    return st[id]+=v;
    if(r<i || i<l)
    return st[id];
    m=(l+r)/2;
    s=update(i, v, l, m, id*2+1, st)+update(i, v, m+1, r, id*2+2, st);
    return st[id]=s;
}