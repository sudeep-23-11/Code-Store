//PalindromePartitioningII
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
bool palin(int i, int j, string &s);
int func(int i, string &s, int dp[]);
int main()
{
    string s;
    cin>>s;
    int dp[s.size()];
    memset(dp, -1, sizeof(dp));
    cout<<(func(0, s, dp)-1)<<endl;
    return 0;
}
bool palin(int i, int j, string &s)
{
    while(i<j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
int func(int i, string &s, int dp[])
{
    int j;
    if(i==s.size())
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    dp[i]=INT_MAX;
    for(j=i;j<s.size();j++)
    {
        if(palin(i, j, s))
        dp[i]=min(dp[i], func(j+1, s, dp)+1);
    }
    return dp[i];
}