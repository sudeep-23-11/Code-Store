//RodCutting
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int l, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    vector<vector<int>>dp(N+1, vector<int>(N+1, -1));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(1, N, A, dp)<<endl;
    return 0;
}
int func(int i, int l, int A[], vector<vector<int>>&dp)
{
    if(l==0)
    return 0;
    if(dp[i][l]!=-1)
    return dp[i][l];
    return dp[i][l]=max((A[i-1]+func(1, l-1, A, dp)), func(i+1, l-1, A, dp));
}