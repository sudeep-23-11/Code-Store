//01Knapsack
#include<iostream>
#include<cstring>
using namespace std;
int dp[1001][1001];
int knapsack(int wt[], int val[], int W, int i);
int main()
{
    int i, N, W;
    cin>>N>>W;
    int wt[N], val[N];
    for(i=0;i<N;i++)
    cin>>wt[i];
    for(i=0;i<N;i++)
    cin>>val[i];
    memset(dp, -1, sizeof(dp));
    cout<<knapsack(wt, val, W, N-1)<<endl;
    return 0;
}
int knapsack(int wt[], int val[], int W, int i)
{
    if(i<0)
    return 0;
    if(dp[W][i]!=-1)
    return dp[W][i];
    if(wt[i]>W)
    return dp[W][i]=knapsack(wt, val, W, i-1);
    return dp[W][i]=max(knapsack(wt, val, W, i-1), knapsack(wt, val, W-wt[i], i-1)+val[i]);
}