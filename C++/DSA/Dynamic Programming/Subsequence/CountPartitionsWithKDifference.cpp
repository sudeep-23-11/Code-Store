//CountPartitionsWithKDifference
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int k, int s1, int s2, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, K, s1, s2;
    cin>>N>>K;
    int A[N];
    s1=0;
    s2=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        s2+=A[i];
    }
    vector<vector<int>>dp(N, vector<int>(s2+1, -1));
    cout<<func(N-1, K, s1, s2, A, dp)<<endl;
    return 0;
}
int func(int n, int k, int s1, int s2, int A[], vector<vector<int>>&dp)
{
    if((s1-s2)==k)
    return 1;
    if((n==-1)||(s2<0))
    return 0;
    if(dp[n][s1]!=-1)
    return dp[n][s1];
    return dp[n][s1]=func(n-1, k, s1+A[n], s2-A[n], A, dp)+func(n-1, k, s1, s2, A, dp);
}