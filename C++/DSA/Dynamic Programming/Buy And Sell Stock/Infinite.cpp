//Infinite
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int b, vector<int>&A, vector<vector<int>>&dp);
int main()
{
    int i, N;
    cin>>N;
    vector<int>A(N);
    vector<vector<int>>dp(N, vector<int>(2, -1));
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<func(0, 0, A, dp)<<endl;
    return 0;
}
int func(int i, int b, vector<int>&A, vector<vector<int>>&dp)
{
    if(i==A.size())
    return 0;
    if(dp[i][b]!=-1)
    return dp[i][b];
    if(b==0)
    return dp[i][b]=max((func(i+1, 1, A, dp)-A[i]), func(i+1, 0, A, dp));
    return dp[i][b]=max((A[i]+func(i+1, 0, A, dp)), func(i+1, 1, A, dp));
}