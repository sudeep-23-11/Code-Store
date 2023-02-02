//MaximumPathSum
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp);
int main()
{
    int i, j, N, M, m;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    vector<vector<int>>dp(N, vector<int>(M, -1));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    m=-100001;
    for(j=0;j<M;j++)
    m=max(m, func(N-1, j, A, dp));
    cout<<m<<endl;
    return 0;
}
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp)
{
    if((m==-1)||(m==A[0].size()))
    return -100001; 
    if(n==0)
    return A[n][m];
    if(dp[n][m]!=-1)
    return dp[n][m];
    return dp[n][m]=A[n][m]+max(func(n-1, m, A, dp), max(func(n-1, m-1, A, dp), func(n-1, m+1, A, dp)));
}