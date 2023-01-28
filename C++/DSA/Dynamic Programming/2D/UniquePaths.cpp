//UniquePaths
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    vector<vector<int>>dp(N, vector<int>(M, -1));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    cout<<func(N-1, M-1, A, dp)<<endl;
    return 0;
}
int func(int n, int m, vector<vector<int>>&A, vector<vector<int>>&dp)
{
    if((n==0)&&(m==0))
    return 1;
    if((n==-1)||(m==-1)||A[n][m]==-1)
    return 0;
    if(dp[n][m]!=-1)
    return dp[n][m];
    return dp[n][m]=func(n-1, m, A, dp)+func(n, m-1, A, dp);
}