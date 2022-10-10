//LongestCommonSubsequence
#include<iostream>
#include<cstring>
using namespace std;
int dp[1001][1001];
int lcs(string X, string Y, int x, int y);
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    memset(dp, -1, sizeof(dp));
    cout<<lcs(s1, s2, s1.size()-1, s2.size()-1)<<endl;
    return 0;
}
int lcs(string X, string Y, int x, int y)
{
    if((x<0)||(y<0))
    return 0;
    if(dp[x][y]!=-1)
    return dp[x][y];
    if(X.at(x)==Y.at(y))
    return dp[x][y]=lcs(X, Y, x-1, y-1)+1;
    return dp[x][y]=max(lcs(X, Y, x-1, y), lcs(X, Y, x, y-1));
}