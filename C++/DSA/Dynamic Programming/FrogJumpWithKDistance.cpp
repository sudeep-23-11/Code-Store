//FrogJumpWithKDistance
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int func(int n, int k, int A[], int dp[]);
int main()
{
    int i, N, K;
    cin>>N>>K;
    int A[N], dp[N+1];
    memset(dp, -1, sizeof(dp));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(N, K, A, dp)<<endl;
    return 0;
}
int func(int n, int k, int A[], int dp[])
{
    int i;
    if(n==1)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    dp[n]=INT_MAX;
    for(i=max(1, n-k);i<n;i++)
    dp[n]=min(dp[n], func(i, k, A, dp)+abs(A[n-1]-A[i-1]));
    return dp[n];
}