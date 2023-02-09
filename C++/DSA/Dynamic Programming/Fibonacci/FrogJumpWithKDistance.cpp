//FrogJumpWithKDistance
#include<iostream>
#include<cstring>
using namespace std;
int func(int n, int k, int A[], int dp[]);
int main()
{
    int i, N, K;
    cin>>N>>K;
    int A[N], dp[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    memset(dp, -1, sizeof(dp));
    cout<<func(N-1, K, A, dp)<<endl;
    return 0;
}
int func(int n, int k, int A[], int dp[])
{
    int i;
    if(n==0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    dp[n]=100001;
    for(i=1;i<=min(k, n);i++)
    dp[n]=min(dp[n], (abs(A[n]-A[n-i]))+func(n-i, k, A, dp));
    return dp[n];
}