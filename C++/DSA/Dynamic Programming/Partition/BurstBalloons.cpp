//BurstBalloons
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int func(int i, int j, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N;
    cin>>N;
    int A[N+2];
    for(i=1;i<=N;i++)
    cin>>A[i];
    A[0]=A[N+1]=1;
    vector<vector<int>>dp(N+2, vector<int>(N+2, -1));
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
    dp[i][j]=INT_MIN;
    for(k=i;k<=j;k++)
    dp[i][j]=max(dp[i][j], func(i, k-1, A, dp)+func(k+1, j, A, dp)+A[i-1]*A[k]*A[j+1]);
    return dp[i][j];
}