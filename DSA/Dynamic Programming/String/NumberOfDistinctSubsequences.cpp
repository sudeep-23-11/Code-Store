//NumberOfDistinctSubsequences
#include<iostream>
#include<vector>
using namespace std;
int func(string &s1, string &s2, int n1, int n2, vector<vector<int>>&dp);
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    vector<vector<int>>dp(s1.size(), vector<int>(s2.size(), -1));
    cout<<func(s1, s2, s1.size()-1, s2.size()-1, dp)<<endl;
    return 0;
}
int func(string &s1, string &s2, int n1, int n2, vector<vector<int>>&dp)
{
    if(n2<0)
    return 1;
    if(n1<0)
    return 0;
    if(dp[n1][n2]!=-1)
    return dp[n1][n2];
    if(s1[n1]==s2[n2])
    return dp[n1][n2]=func(s1, s2, n1-1, n2-1, dp)+func(s1, s2, n1-1, n2, dp);
    return dp[n1][n2]=func(s1, s2, n1-1, n2, dp);
}