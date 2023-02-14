//LongestCommonSubstring
#include<iostream>
using namespace std;
int main()
{
    int i, j, m;
    string s1, s2;
    cin>>s1>>s2;
    int dp[s1.size()+1][s2.size()+1];
    m=-100001;
    for(i=0;i<=s1.size();i++)
    {
        for(j=0;j<=s2.size();j++)
        {
            if((i==0)||(j==0))
            dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else
            dp[i][j]=0;
            m=max(m, dp[i][j]);
        }
    }
    cout<<m<<endl;
    return 0;
}