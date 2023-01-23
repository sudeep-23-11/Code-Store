//HouseRobber
#include<iostream>
#include<cstring>
using namespace std;
int func(int l, int r, int A[], int dp[]);
int main()
{
    int i, N, m1, m2;
    cin>>N;
    int A[N], dp[N+1];
    for(i=0;i<N;i++)
    cin>>A[i];
    memset(dp, -1, sizeof(dp));
    m1=func(1, N-1, A, dp);
    memset(dp, -1, sizeof(dp));
    m2=func(2, N, A, dp);
    cout<<max(m1, m2)<<endl;
    return 0;
}
int func(int l, int r, int A[], int dp[])
{
    if(r<l)
    return 0;
    if(dp[r]!=-1)
    return dp[r];
    return dp[r]=max((A[r-1]+func(l, r-2, A, dp)), func(l, r-1, A, dp));
}