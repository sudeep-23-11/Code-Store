//CountSubsequencesWithKSum
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int s, int k, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, s, K;
    cin>>N>>K;
    int A[N];
    s=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    vector<vector<int>>dp(N, vector<int>(s+1, -1));
    cout<<func(N-1, s, K, A, dp)<<endl;
    return 0;
}
int func(int n, int s, int k, int A[], vector<vector<int>>&dp)
{
    if(s==k)
    return 1;
    if(n<0)
    return 0;
    if(dp[n][s]!=-1)
    return dp[n][s];
    return dp[n][s]=func(n-1, s-A[n], k, A, dp)+func(n-1, s, k, A, dp);
}