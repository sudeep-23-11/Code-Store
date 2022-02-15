//LazyPropagation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct segmenttree
{
    int size, mid;
    vector<int>sum;
    vector<int>lo;
    vector<int>hi;
    vector<int>lazy;
    void stsize(int n)
    {
        size=1;
        while(n>size)
        size*=2;
        sum.resize((size*2), 0);
        lo.resize(size*2);
        hi.resize(size*2);
        lazy.resize((size*2), 0);
        stconstruct(1, 1, size);
    }
    void stconstruct(int i, int a, int b)
    {
        if(i>=(size*2))
        return;
        else
        {
            lo[i]=a;
            hi[i]=b;
            mid=(lo[i]+hi[i])/2;
            stconstruct((i*2), a, mid);
            stconstruct((i*2+1), (mid+1), b);
        }   
    }
    void stupdate(int idx, int val, int node)
    {
        if((idx>hi[node])||(idx<lo[node]))
        return;
        else if(hi[node]==lo[node])
        sum[node]=val;
        else
        {
            stupdate(idx, val, (node*2));
            stupdate(idx, val, (node*2+1));
            sum[node]=sum[node*2]+sum[node*2+1];
        }
    }
    void strangeupdate(int a, int b, int val, int node)
    {
        if(lazy[node]!=0)
        { 
            sum[node]=lazy[node]*(hi[node]-lo[node]+1);
            if(lo[node]!=hi[node])
            {
                lazy[node*2]=lazy[node];
                lazy[node*2+1]=lazy[node];
            }
            lazy[node]=0;
        }
        if((a>hi[node])||(b<lo[node]))
        return;
        else if((a<=lo[node])&&(b>=hi[node]))
        {
            sum[node]=val*(hi[node]-lo[node]+1);
            if(lo[node]!=hi[node])
            {
                lazy[node*2]=val;
                lazy[node*2+1]=val;
            }
        }
        else
        {
            strangeupdate(a, b, val, (node*2));
            strangeupdate(a, b, val, (node*2+1));
            sum[node]=sum[node*2]+sum[node*2+1];
        }
    }
    int stsum(int a, int b, int node)
    {
        if(lazy[node]!=0)
        { 
            sum[node]=lazy[node]*(hi[node]-lo[node]+1);
            if(lo[node]!=hi[node])
            {
                lazy[node*2]=lazy[node];
                lazy[node*2+1]=lazy[node];
            }
            lazy[node]=0;
        }
        if((a>hi[node])||(b<lo[node]))
        return 0;
        else if((a<=lo[node])&&(b>=hi[node]))
        return sum[node];
        else
        return (stsum(a, b, (node*2))+stsum(a, b, (node*2+1)));
    }
};
int main()
{
    segmenttree st;
    int i, N, Q, a, b, c, d;
    cin>>N;
    st.stsize(N);
    int A[N+1];
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        st.stupdate(i, A[i], 1);
    }
    cin>>Q;
    cout<<"Press 1 to update a particular range"<<endl;
    cout<<"Press 2 to find sum of a particular range"<<endl;
    for(i=1;i<=Q;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            cin>>d;
            st.strangeupdate(b, c, d, 1);
        }
        else if(a==2)
        cout<<st.stsum(b, c, 1)<<endl;
    }
    return 0;
}