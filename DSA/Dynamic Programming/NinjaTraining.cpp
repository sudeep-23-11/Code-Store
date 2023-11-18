//NinjaTraining
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int func(int n, int d, int A[][3], int dp[][3]);
int main()
{
    int i, j, N, m;
    cin>>N;
    int A[N][3], dp[N][3];
    for(i=0;i<N;i++)
    {
        for(j=0;j<3;j++)
        cin>>A[i][j];
    }
    memset(dp, -1, sizeof(dp));
    m=INT_MIN;
    for(i=0;i<3;i++)
    m=max(m, func(N-1, i, A, dp));
    cout<<m<<endl;
    return 0;
}
int func(int n, int d, int A[][3], int dp[][3])
{
    int i;
    if(n<0)
    return 0;
    if(dp[n][d]!=-1)
    return dp[n][d];
    dp[n][d]=INT_MIN;
    for(i=0;i<3;i++)
    {
        if(i!=d)
        dp[n][d]=max(dp[n][d], A[n][d]+func(n-1, i, A, dp));
    }
    return dp[n][d];
}