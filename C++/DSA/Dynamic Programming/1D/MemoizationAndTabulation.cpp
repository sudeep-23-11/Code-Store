//MemoizationAndTabulation
#include<iostream>
#include<cstring>
using namespace std;
int func(int n, int dp[]);
int main()
{
    int i, N, p1, p2, cr;
    cin>>N;
    int dp[N+1];
    memset(dp, -1, sizeof(dp));
    cout<<func(N, dp)<<endl;
    if(N<2)
    cout<<N<<endl;
    else
    {
        p2=0;
        p1=1;
        for(i=2;i<=N;i++)
        {
            cr=p1+p2;
            p2=p1;
            p1=cr;
        }
        cout<<cr<<endl;
    }
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