//Memoization
#include<iostream>
#include<cstring>
using namespace std;
int func(int n, int dp[]);
int main()
{
    int i, N;
    cin>>N;
    int dp[N+1];
    memset(dp, -1, sizeof(dp));
    cout<<func(N, dp)<<endl;
    return 0;
}
int func(int n, int dp[])
{
    if(n<2)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=func(n-1, dp)+func(n-2, dp);
}