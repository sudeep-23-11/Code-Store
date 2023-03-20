//AllocateBooks
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, N, s, lo, hi, m;
    cin>>N>>s;
    int A[N];
    lo=-100001;
    hi=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        lo=max(lo, A[i]);
        hi+=A[i];
    }
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        vector<int>v;
        v.push_back(0);
        for(i=0;i<N;i++)
        {
            if((v[v.size()-1]+A[i])<=m)
            v[v.size()-1]+=A[i];
            else
            v.push_back(A[i]);
        }
        if(v.size()<=s)
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<lo<<endl;
    return 0;
}