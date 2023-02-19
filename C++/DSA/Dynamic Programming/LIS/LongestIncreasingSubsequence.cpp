//LongestIncreasingSubsequence
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, j, k, N;
    cin>>N;
    int A[N], dp[N], hash[N];
    vector<int>v;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        dp[i]=1;
        hash[i]=-1;
    }
    k=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if((A[j]<A[i])&&((dp[j]+1)>dp[i]))
            {
                dp[i]=(dp[j]+1);
                hash[i]=j;
            }
        }
        if(dp[i]>dp[k])
        k=i;
    }
    cout<<dp[k]<<endl;
    while(k!=-1)
    {
        v.push_back(A[k]);
        k=hash[k];
    }
    for(i=(v.size()-1);i>=0;i--)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}