//KthOneProblem
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int K[100001];
struct segmenttree
{
    int size, mid;
    vector<int>sum;
    vector<int>lo;
    vector<int>hi;
    void stsize(int n)
    {
        size=1;
        while(n>size)
        size*=2;
        sum.resize((size*2), 0);
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
        sum[node]=val;
        else
        {
            stupdate(idx, val, (node*2));
            stupdate(idx, val, (node*2+1));
            sum[node]=sum[node*2]+sum[node*2+1];
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
    int kth(int idx, int node)
    {
        if((hi[node]==lo[node])&&(sum[node]==0)&&(idx>0))
        return (-1);
        else if((hi[node]==lo[node])&&(sum[node]==1)&&(idx==1))
        return hi[node];
        else if(idx<=sum[node*2])
        return (kth(idx, (node*2)));
        else
        return (kth((idx-sum[node*2]), (node*2+1)));
    }
};
int main()
{
    segmenttree st;
    int i, N, e, Q, a, b, c;
    cin>>N;
    memset(K, 0, sizeof(K));
    for(i=0;i<N;i++)
    {
        cin>>e;
        K[e]=1;
    }
    st.stsize(100000);
    for(i=1;i<=100000;i++)
    st.stupdate(i, K[i], 1);
    cin>>Q;
    cout<<"Press 1 to check whether a particular element is present or not"<<endl;
    cout<<"Press 2 to find the order of a particular element"<<endl;
    cout<<"Press 3 to find the element having a particular order"<<endl;
    cout<<"Press 4 to find the number of elements in a particular range"<<endl;
    cout<<"Press 5 to add or remove a particular element"<<endl;
    for(i=1;i<=Q;i++)
    {
        cin>>a>>b;
        if(a==1)
        {
            if(K[b]==1)
            cout<<"Element present"<<endl;
            else
            cout<<"Element absent"<<endl;
        }
        else if(a==2)
        cout<<st.stsum(1, b, 1)<<endl;
        else if(a==3)
        cout<<st.kth(b, 1)<<endl;
        else if(a==4)
        {
            cin>>c;
            cout<<st.stsum(b, c, 1)<<endl;
        }
        else if(a==5)
        {
            if(K[b]==0)
            {
                K[b]=1;
                st.stupdate(b, 1, 1);
            }
            else
            {
                K[b]=0;
                st.stupdate(b, 0, 1);
            }
        }
    }
    return 0;
}