//MinimumFallingPathSum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp);
int main()
{
    int i, j, N, M, m;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M)), dp(N, vector<int>(M, -1));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    m=INT_MAX;
    for(i=0;i<A.size();i++)
    m=min(m, func(A.size()-1, i, A, dp));
    cout<<m<<endl;
    return 0;
}
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp)
{
    if(m<0 || m>=A.size())
    return INT_MAX;
    if(!n)
    return A[0][m];
    if(dp[n][m]!=-1)
    return dp[n][m];
    return dp[n][m]=A[n][m]+min(func(n-1, m, A, dp), min(func(n-1, m-1, A, dp), func(n-1, m+1, A, dp)));
}