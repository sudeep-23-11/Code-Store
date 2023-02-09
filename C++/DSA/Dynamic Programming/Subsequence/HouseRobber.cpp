//HouseRobber
#include<iostream>
#include<cstring>
using namespace std;
int func(int n, int si, int A[], int dp[]);
int main()
{
    int i, N, m1, m2;
    cin>>N;
    int A[N], dp[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    memset(dp, -1, sizeof(dp));
    m1=func(N-1, 1, A, dp);
    memset(dp, -1, sizeof(dp));
    m2=func(N-2, 0, A, dp);
    cout<<max(m1, m2)<<endl;
    return 0;
}
int func(int n, int si, int A[], int dp[])
{
    if(n<si)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=max((A[n]+func(n-2, si, A, dp)), func(n-1, si, A, dp));
}