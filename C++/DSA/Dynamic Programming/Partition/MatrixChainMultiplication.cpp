//MatrixChainMultiplication
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int j, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    vector<vector<int>>dp(N, vector<int>(N, -1));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(1, N-1, A, dp)<<endl;
    return 0;
}
int func(int i, int j, int A[], vector<vector<int>>&dp)
{
    int k;
    if(i==j)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    dp[i][j]=100001;
    for(k=i;k<j;k++)
    dp[i][j]=min(dp[i][j], (func(i, k, A, dp)+func(k+1, j, A, dp)+(A[i-1]*A[k]*A[j])));
    return dp[i][j];
}