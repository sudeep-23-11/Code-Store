//PalindromePartitioningII
#include<iostream>
#include<cstring>
using namespace std;
bool palin(string s, int i, int j);
int func(int i, string &s, int dp[]);
int main()
{
    int i;
    string s;
    cin>>s;
    int dp[s.size()];
    memset(dp, -1, sizeof(dp));
    cout<<(func(0, s, dp)-1)<<endl;
    return 0;
}
bool palin(string s, int i, int j)
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
    dp[i]=100001;
    for(j=i;j<s.size();j++)
    {
        if(palin(s, i, j)==true)
        dp[i]=min(dp[i], (1+func(j+1, s, dp)));
    }
    return dp[i];
}