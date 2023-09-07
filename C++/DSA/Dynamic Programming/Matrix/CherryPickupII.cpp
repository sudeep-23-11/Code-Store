//CherryPickupII
#include<iostream>
#include<vector>
#include<climits>
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
    if(m1<0 || m1>=A[0].size() || m2<0 || m2>=A[0].size())
    return INT_MIN;
    if(dp[n][m1][m2]!=-1)
    return dp[n][m1][m2];
    if(m1==m2)
    dp[n][m1][m2]=A[n][m1];
    else
    dp[n][m1][m2]=A[n][m1]+A[n][m2];
    if(n<A.size()-1)
    {
        m=INT_MIN;
        for(i=m1-1;i<=m1+1;i++)
        {
            for(j=m2-1;j<=m2+1;j++)
            m=max(m, func(n+1, i, j, A, dp));
        }
        dp[n][m1][m2]+=m;
    }
    return dp[n][m1][m2];
}