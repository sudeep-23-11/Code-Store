//NumberOfDistinctSubsequences
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int m, string &s1, string &s2, vector<vector<int>>&dp);
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    vector<vector<int>>dp(s1.size(), vector<int>(s2.size(), -1));
    cout<<func(s1.size()-1, s2.size()-1, s1, s2, dp)<<endl;
    return 0;
}
int func(int n, int m, string &s1, string &s2, vector<vector<int>>&dp)
{
    if(m==-1)
    return 1;
    if(n==-1)
    return 0;
    if(dp[n][m]!=-1)
    return dp[n][m];
    if(s1[n]==s2[m])
    return dp[n][m]=func(n-1, m-1, s1, s2, dp)+func(n-1, m, s1, s2, dp);
    return dp[n][m]=func(n-1, m, s1, s2, dp);
}