//MemoizationAndTabulation
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n, vector<int>dp);
int main()
{
    int i, N, p1, p2, curr;
    cin>>N;
    vector<int>dp;
    dp.resize(N+1, -1);
    cout<<fibo(N, dp)<<endl;
    if(N<=1)
    cout<<N<<endl;
    else
    {
        p1=1;
        p2=0;
        for(i=2;i<=N;i++)
        {
            curr=p1+p2;
            p2=p1;
            p1=curr;
        }
        cout<<curr<<endl;
    }
    return 0;
}
int fibo(int n, vector<int>dp)
{
    if(n<=1)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=fibo(n-1, dp)+fibo(n-2, dp);
}