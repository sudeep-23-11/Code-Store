//BuyAndSellStock
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int b, int k, vector<int>&A, vector<vector<vector<int>>>&dp);
int main()
{
    int i, N, K;
    cin>>N>>K;
    vector<int>A(N);
    vector<vector<vector<int>>>dp(N, vector<vector<int>>(2, vector<int>(K+1, -1)));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(0, 1, K, A, dp)<<endl;
    return 0;
}
int func(int n, int b, int k, vector<int>&A, vector<vector<vector<int>>>&dp)
{
    if(n==A.size() || !k)
    return 0;
    if(dp[n][b][k]!=-1)
    return dp[n][b][k];
    if(b)
    return dp[n][b][k]=max(-A[n]+func(n+1, 0, k, A, dp), func(n+1, 1, k, A, dp));
    return dp[n][b][k]=max(A[n]+func(n+1, 1, k-1, A, dp), func(n+1, 0, k, A, dp));
}