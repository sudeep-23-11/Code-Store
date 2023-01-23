//Tabulation
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, N;
    cin>>N;
    int dp[N+1];
    memset(dp, -1, sizeof(dp));
    dp[0]=0;
    dp[1]=1;
    for(i=2;i<=N;i++)
    dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[N]<<endl;
    return 0;
}