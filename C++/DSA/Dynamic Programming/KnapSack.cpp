//Knapsack
#include<iostream>
#include<cstring>
using namespace std;
int dp[1001][1001];
int knapsack(int wt[], int val[], int w, int n);
int main()
{
    int i, w, n;
    cin>>w>>n;
    int wt[n-1], val[n-1];
    for(i=0;i<n;i++)
    cin>>wt[i];
    for(i=0;i<n;i++)
    cin>>val[i];
    memset(dp, -1, sizeof(dp));
    cout<<knapsack(wt, val, w, n)<<endl;
    return 0;
}
int knapsack(int wt[], int val[], int w, int n)
{
    if((w==0)||(n==0))
    return 0;
    if(dp[w][n-1]!=-1)
    return dp[w][n-1];
    if(wt[n-1]>w)
    return dp[w][n-1]=knapsack(wt, val, w, n-1);
    return dp[w][n-1]=max(knapsack(wt, val, w, n-1), knapsack(wt, val, w-wt[n-1], n-1)+val[n-1]);
}