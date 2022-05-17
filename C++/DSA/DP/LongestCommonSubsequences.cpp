//LongestCommonSubsequences
#include<iostream>
#include<cstring>
using namespace std;
int dp[1001][1001];
int lcs(string X, string Y, int x, int y);
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    memset(dp, -1, sizeof(dp));
    cout<<lcs(S1, S2, S1.size(), S2.size())<<endl;
    return 0;
}
int lcs(string X, string Y, int x, int y)
{
    if(x==0||y==0)
    return 0;
    else if(dp[x-1][y-1]!=-1)
    return dp[x-1][y-1];
    else if(X.at(x-1)==Y.at(y-1))
    return dp[x-1][y-1]=lcs(X, Y, x-1, y-1)+1;
    else
    return dp[x-1][y-1]=max(lcs(X, Y, x-1, y), lcs(X, Y, x, y-1));
}