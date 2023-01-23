//FrogJumpWithKDistance
#include<iostream>
#include<cstring>
using namespace std;
int func(int n, int k, int A[], int dp[]);
int main()
{
    int i, N, K;
    cin>>N>>K;
    int A[N], dp[N+1];
    for(i=0;i<N;i++)
    cin>>A[i];
    memset(dp, -1, sizeof(dp));
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
    dp[n]=100001;
    for(i=1;i<=min(k, n-1);i++)
    dp[n]=min(dp[n], (func(n-i, k, A, dp)+abs(A[n-1]-A[n-i-1])));
    return dp[n];
}