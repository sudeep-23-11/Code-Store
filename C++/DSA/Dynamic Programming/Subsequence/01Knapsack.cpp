//01Knapsack
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int func(int n, int w, int wt[], int val[], vector<vector<int>>&dp);
int main()
{
    int i, N, W;
    cin>>N>>W;
    int wt[N], val[N];
    vector<vector<int>>dp(N, vector<int>(W+1, -1));
    for(i=0;i<N;i++)
    cin>>wt[i];
    for(i=0;i<N;i++)
    cin>>val[i];
    cout<<func(N-1, W, wt, val, dp)<<endl;
    return 0;
}
int func(int n, int w, int wt[], int val[], vector<vector<int>>&dp)
{
    if(w<0)
    return INT_MIN;
    if(n<0)
    return 0;
    if(dp[n][w]!=-1)
    return dp[n][w];
    return dp[n][w]=max(val[n]+func(n-1, w-wt[n], wt, val, dp), func(n-1, w, wt, val, dp));
}