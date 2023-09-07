//LongestPalindromicSubstring
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j, k, m, mi;
    string s;
    cin>>s;
    int dp[s.size()][s.size()];
    memset(dp, 0, sizeof(dp));
    m=1;
    mi=0;
    for(k=0;k<s.size();k++)
    {
        for(i=0;i<s.size()-k;i++)
        {
            j=i+k;
            if(i==j)
            dp[i][j]=1;
            else if((j-i==1 || dp[i+1][j-1]) && s[i]==s[j])
            {
                dp[i][j]=dp[i+1][j-1]+2;
                if(dp[i][j]>m)
                {
                    m=dp[i][j];
                    mi=i;
                }
            }
        }
    }
    cout<<m<<endl;
    cout<<s.substr(mi, m)<<endl;
    return 0;
}