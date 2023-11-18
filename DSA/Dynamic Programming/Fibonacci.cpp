//Fibonacci
#include<iostream>
#include<cstring>
using namespace std;
int memoization(int n, int dp[]);
int tabulation(int n, int dp[]);
int spaceOptimizedTabulation(int n);
int main()
{
    int i, N;
    cin>>N;
    int dp[N+1];
    memset(dp, -1, sizeof(dp));
    cout<<memoization(N, dp)<<endl;
    tabulation(N, dp);
    spaceOptimizedTabulation(N);
    return 0;
}
int memoization(int n, int dp[])
{
    if(n<2)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=memoization(n-1, dp)+memoization(n-2, dp);
}
int tabulation(int n, int dp[])
{
    int i;
    if(n<2)
    cout<<n<<endl;
    else
    {
        dp[0]=0;
        dp[1]=1;
        for(i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
        cout<<dp[n]<<endl;
    }
}
int spaceOptimizedTabulation(int n)
{
    int i, a, b, c;
    if(n<2)
    cout<<n<<endl;
    else
    {
        a=0;
        b=1;
        for(i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
}