//MinimumCostToCut
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int func(int i, int j, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, L;
    cin>>N>>L;
    int A[N+2];
    vector<vector<int>>dp(N+1, vector<int>(N+1, -1));
    for(i=0;i<N;i++)
    cin>>A[i];
    A[N]=0;
    A[N+1]=L;
    sort(A, A+N+2);
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
    dp[i][j]=100001;
    for(k=i;k<=j;k++)
    dp[i][j]=min(dp[i][j], ((A[j+1]-A[i-1])+func(i, k-1, A, dp)+func(k+1, j, A, dp)));
    return dp[i][j];
}