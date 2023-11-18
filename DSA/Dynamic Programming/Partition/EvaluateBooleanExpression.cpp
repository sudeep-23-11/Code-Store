//EvaluateBooleanExpression
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int j, int b, string &s, vector<vector<vector<int>>>&dp);
int main()
{
    string s;
    cin>>s;
    vector<vector<vector<int>>>dp(s.size(), vector<vector<int>>(s.size(), vector<int>(2, -1)));
    cout<<func(0, s.size()-1, 1, s, dp)<<endl;
    return 0;
}
int func(int i, int j, int b, string &s, vector<vector<vector<int>>>&dp)
{
    int k, lt, lf, rt, rf, t;
    char c;
    if(i==j)
    {
        if((s[i]=='T' && b) || (s[i]=='F' && !b))
        return 1;
        return 0;
    }
    if(dp[i][j][b]!=-1)
    return dp[i][j][b];
    dp[i][j][b]=0;
    for(k=i+1;k<j;k+=2)
    {
        c=s[k];
        lt=func(i, k-1, 1, s, dp);
        lf=func(i, k-1, 0, s, dp);
        rt=func(k+1, j, 1, s, dp);
        rf=func(k+1, j, 0, s, dp);
        if(b)
        {
            if(c=='&')
            t=lt*rt;
            else if(c=='|')
            t=lt*rt+lt*rf+lf*rt;
            else
            t=lt*rf+lf*rt;
        }
        else
        {
            if(c=='&')
            t=lt*rf+lf*rt+lf*rf;
            else if(c=='|')
            t=lf*rf;
            else
            t=lt*rt+lf*rf;
        }
        dp[i][j][b]+=t;
    }
    return dp[i][j][b];
}