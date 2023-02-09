//MinimumCoins
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int s, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, K;
    cin>>N>>K;
    int A[N];
    vector<vector<int>>dp(N, vector<int>(K+1, -1));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(N-1, K, A, dp)<<endl;
    return 0;
}
int func(int n, int s, int A[], vector<vector<int>>&dp)
{
    if(s==0)
    return 0;
    if((n==-1)||(s<0))
    return 100001;
    if(dp[n][s]!=-1)
    return dp[n][s];
    return dp[n][s]=min((1+func(n, s-A[n], A, dp)), func(n-1, s, A, dp));
}