//LongestIncreasingSubsequence
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, j, N, m, mi, mw;
    cin>>N;
    int A[N], dp[N], parent[N], ways[N];
    vector<int>v;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        dp[i]=1;
        parent[i]=i;
        ways[i]=1;
    }
    m=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[j]<A[i])
            {
                if(dp[j]+1 > dp[i])
                {
                    dp[i]=dp[j]+1;
                    parent[i]=j;
                    ways[i]=ways[j];
                }
                else if(dp[j]+1 == dp[i])
                ways[i]+=ways[j];
            }
        }
        if(dp[i]>m)
        {
            m=dp[i];
            mi=i;
            mw=ways[i];
        }
        else if(dp[i]==m)
        mw+=ways[i];
    }
    cout<<m<<endl;
    i=mi;
    v.push_back(A[i]);
    while(i!=parent[i])
    {
        i=parent[i];
        v.push_back(A[i]);
    }
    for(i=v.size()-1;i>=0;i--)
    cout<<v[i]<<" ";
    cout<<endl<<mw<<endl;
    return 0;
}