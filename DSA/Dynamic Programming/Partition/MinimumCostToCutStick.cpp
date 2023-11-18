//MinimumCostToCutStick
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int func(int i, int j, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, L;
    cin>>N>>L;
    int A[N+2];
    for(i=0;i<N;i++)
    cin>>A[i];
    A[N]=0;
    A[N+1]=L;
    sort(A, A+N+2);
    vector<vector<int>>dp(N+2, vector<int>(N+2, -1));
    cout<<func(0, N+1, A, dp)<<endl;
    return 0;
}
int func(int i, int j, int A[], vector<vector<int>>&dp)
{
    int k;
    if(j-i == 1)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    dp[i][j]=INT_MAX;
    for(k=i+1;k<j;k++)
    dp[i][j]=min(dp[i][j], func(i, k, A, dp)+func(k, j, A, dp)+A[j]-A[i]);
    return dp[i][j];
}