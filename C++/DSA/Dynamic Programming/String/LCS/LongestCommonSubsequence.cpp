//LongestCommonSubsequence
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j;
    string s1, s2, s;
    cin>>s1>>s2;
    int dp[s1.size()+1][s2.size()+1];
    for(i=0;i<=s1.size();i++)
    {
        for(j=0;j<=s2.size();j++)
        {
            if(!i || !j)
            dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else
            dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[s1.size()][s2.size()]<<endl;
    i=s1.size();
    j=s2.size();
    s="";
    while(i && j)
    {
        if(s1[i-1]==s2[j-1])
        {
            s+=s1[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        i--;
        else
        j--;
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}