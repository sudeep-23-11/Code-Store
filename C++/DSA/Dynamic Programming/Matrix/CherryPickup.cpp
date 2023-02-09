//CherryPickup
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int m1, int m2, vector<vector<int>>&A, vector<vector<vector<int>>>&dp);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    vector<vector<vector<int>>>dp(N, vector<vector<int>>(M, vector<int>(M, -1)));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    cout<<func(0, 0, M-1, A, dp)<<endl;
    return 0;
}
int func(int n, int m1, int m2, vector<vector<int>>&A, vector<vector<vector<int>>>&dp)
{
    int i, j, m;
    if((m1==-1)||(m1==A[0].size())||(m2==-1)||(m2==A[0].size()))
    return -100001;
    if(n==A.size())
    return 0;
    if(dp[n][m1][m2]!=-1)
    return dp[n][m1][m2];
    m=-100001;
    for(i=-1;i<=1;i++)
    {
        for(j=-1;j<=1;j++)
        m=max(m, func(n+1, m1+i, m2+j, A, dp));
    }
    if(m1==m2)
    return dp[n][m1][m2]=A[n][m1]+m;
    return dp[n][m1][m2]=A[n][m1]+A[n][m2]+m;
}