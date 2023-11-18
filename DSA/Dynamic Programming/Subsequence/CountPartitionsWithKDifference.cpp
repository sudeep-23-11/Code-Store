//CountPartitionsWithKDifference
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int s1, int s2, int k, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, K, s;
    cin>>N>>K;
    int A[N];
    s=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    vector<vector<int>>dp(N, vector<int>(s+1, -1));
    cout<<func(N-1, s, 0, K, A, dp)<<endl;
    return 0;
}
int func(int n, int s1, int s2, int k, int A[], vector<vector<int>>&dp)
{
    if(s1-s2 == k)
    return 1;
    if(n<0)
    return 0;
    if(dp[n][s1]!=-1)
    return dp[n][s1];
    return dp[n][s1]=func(n-1, s1-A[n], s2+A[n], k, A, dp)+func(n-1, s1, s2, k, A, dp);
}