//CombinationSumIV
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int s, vector<int>&A, vector<vector<int>>&dp);
int main()
{
    int i, N, s, c;
    cin>>N;
    vector<int>A(N);
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    vector<vector<int>>dp(N, vector<int>(s+1, -1));
    c=0;
    for(i=0;i<N;i++)
    c+=func(i, s-A[i], A, dp);
    cout<<c<<endl;
    return 0;
}
int func(int n, int s, vector<int>&A, vector<vector<int>>&dp)
{
    int i;
    if(!s)
    return 1;
    if(s<0)
    return 0;
    if(dp[n][s]!=-1)
    return dp[n][s];
    dp[n][s]=0;
    for(i=0;i<A.size();i++)
    dp[n][s]+=func(i, s-A[i], A, dp);
    return dp[n][s];
}