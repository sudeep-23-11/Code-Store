//BurstBalloons
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int j, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N;
    cin>>N;
    int A[N+2];
    vector<vector<int>>dp(N+1, vector<int>(N+1, -1));
    for(i=1;i<=N;i++)
    cin>>A[i];
    A[0]=1;
    A[N+1]=1;
    cout<<func(1, N, A, dp)<<endl;
    return 0;
}
int func(int i, int j, int A[], vector<vector<int>>&dp)
{
    int k;
    if(i>j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    dp[i][j]=-100001;
    for(k=i;k<=j;k++)
    dp[i][j]=max(dp[i][j], ((A[i-1]*A[k]*A[j+1])+func(i, k-1, A, dp)+func(k+1, j, A, dp)));
    return dp[i][j];
}