//MinimumElementsForKSum
#include<iostream>
#include<vector>
#include<climits>
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
    if(!s)
    return 0;
    if(n<0 || s<0)
    return INT_MAX-1;
    if(dp[n][s]!=-1)
    return dp[n][s];
    return dp[n][s]=min(1+func(n, s-A[n], A, dp), func(n-1, s, A, dp));
}