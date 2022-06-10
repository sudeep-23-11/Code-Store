//SegmentTree
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct segmenttree
{
    int size, mid;
    vector<int>sum;
    vector<int>maximum;
    vector<int>gcd;
    vector<int>lo;
    vector<int>hi;
    void stsize(int n)
    {
        size=1;
        while(n>size)
        size*=2;
        sum.resize((size*2), 0);
        maximum.resize((size*2), (int(-1e8)));
        gcd.resize((size*2), 0);
        lo.resize(size*2);
        hi.resize(size*2);
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
        {
            sum[node]=val;
            maximum[node]=val;
            gcd[node]=val;
        }
        else
        {
            stupdate(idx, val, (node*2));
            stupdate(idx, val, (node*2+1));
            sum[node]=sum[node*2]+sum[node*2+1];
            maximum[node]=max(maximum[node*2], maximum[node*2+1]);
            gcd[node]=__gcd(gcd[node*2], gcd[node*2+1]);
        }
    }
    int stsum(int a, int b, int node)
    {
        if((a>hi[node])||(b<lo[node]))
        return 0;
        else if((a<=lo[node])&&(b>=hi[node]))
        return sum[node];
        else
        return (stsum(a, b, (node*2))+stsum(a, b, (node*2+1)));
    }
    int stmax(int a, int b, int node)
    {
        if((a>hi[node])||(b<lo[node]))
        return (int(-1e8));
        else if((a<=lo[node])&&(b>=hi[node]))
        return maximum[node];
        else
        return (max(stmax(a, b, (node*2)), stmax(a, b, (node*2+1))));
    }
    int stgcd(int a, int b, int node)
    {
        if((a>hi[node])||(b<lo[node]))
        return 0;
        else if((a<=lo[node])&&(b>=hi[node]))
        return gcd[node];
        else
        return (__gcd(stgcd(a, b, (node*2)), stgcd(a, b, (node*2+1))));
    }
};
int main()
{
    segmenttree st;
    int i, N, Q, a, b, c;
    cin>>N;
    st.stsize(N);
    int A[N+1];
    for(i=1;i<=N;i++)
    {
        cin>>A[i];
        st.stupdate(i, A[i], 1);
    }
    cin>>Q;
    cout<<"Press 1 to update a particular element"<<endl;
    cout<<"Press 2 to find sum of a particular range"<<endl;
    cout<<"Press 3 to find max of a particular range"<<endl;
    cout<<"Press 4 to find gcd of a particular range"<<endl;
    for(i=1;i<=Q;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        st.stupdate(b, c, 1);
        else if(a==2)
        cout<<st.stsum(b, c, 1)<<endl;
        else if(a==3)
        cout<<st.stmax(b, c, 1)<<endl;
        else if(a==4)
        cout<<st.stgcd(b, c, 1)<<endl;
    }
    return 0;
}