//EvaluateBooleanExpression
#include<iostream>
#include<vector>
using namespace std;
int func(int i, int j, int b, string &s, vector<vector<vector<int>>>&dp);
int main()
{
    int i;
    string s;
    cin>>s;
    vector<vector<vector<int>>>dp(s.size(), vector<vector<int>>(s.size(), vector<int>(2, -1)));
    cout<<func(0, s.size()-1, 1, s, dp)<<endl;
    return 0;
}
int func(int i, int j, int b, string &s, vector<vector<vector<int>>>&dp)
{
    int k, lt, rt, lf, rf;
    if((i==j)&&(b==1))
    return s[i]=='T';
    if((i==j)&&(b==0))
    return s[i]=='F';
    if(dp[i][j][b]!=-1)
    return dp[i][j][b];
    dp[i][j][b]=0;
    for(k=i+1;k<j;k+=2)
    {
        lt=func(i, k-1, 1, s, dp);
        rt=func(k+1, j, 1, s, dp);
        lf=func(i, k-1, 0, s, dp);
        rf=func(k+1, j, 0, s, dp);
        if(s[k]=='&')
        {
            if(b==1)
            dp[i][j][b]+=(lt*rt);
            else
            dp[i][j][b]+=(lt*rf+lf*rt+lf*rf);
        }
        else if(s[k]=='|')
        {
            if(b==1)
            dp[i][j][b]+=(lt*rt+lt*rf+lf*rt);
            else
            dp[i][j][b]+=(lf*rf);
        }
        else
        {
            if(b==1)
            dp[i][j][b]+=(lt*rf+lf*rt);
            else
            dp[i][j][b]+=(lt*rt+lf*rf);
        }
    }
    return dp[i][j][b];
}