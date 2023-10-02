#include<iostream>
using namespace std;
int main()
{
    int i, N, c2, c3, c5;
    cin>>N;
    int dp[N+1];
    c2=c3=c5=0;
    dp[1]=1;
    for(i=2;i<=N;i++)
    {
        dp[i]=min(dp[c2+1]*2, min(dp[c3+1]*3, dp[c5+1]*5));
        if(dp[i]==dp[c2+1]*2)
        c2++;
        if(dp[i]==dp[c3+1]*3)
        c3++;
        if(dp[i]==dp[c5+1]*5)
        c5++;
    }
    cout<<dp[N]<<endl;
    return 0;
}