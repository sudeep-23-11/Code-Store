//AtMostK
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int b, int k, vector<int>&A, vector<vector<vector<int>>>&dp);
int main()
{
    int i, N, K;
    cin>>N>>K;
    vector<int>A(N);
    vector<vector<vector<int>>>dp(N, vector<vector<int>>(2, vector<int>(K+1, -1)));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(0, 0, K, A, dp)<<endl;
    return 0;
}
int func(int i, int b, int k, vector<int>&A, vector<vector<vector<int>>>&dp)
{
    if((i==A.size())||(k==0))
    return 0;
    if(dp[i][b][k]!=-1)
    return dp[i][b][k];
    if(b==0)
    return dp[i][b][k]=max((func(i+1, 1, k, A, dp)-A[i]), func(i+1, 0, k, A, dp));
    return dp[i][b][k]=max((A[i]+func(i+1, 0, k-1, A, dp)), func(i+1, 1, k, A, dp));
}