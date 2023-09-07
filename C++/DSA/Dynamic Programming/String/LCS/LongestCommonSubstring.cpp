//LongestCommonSubstring
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, m, mi, mj;
    string s1, s2, s;
    cin>>s1>>s2;
    int dp[s1.size()+1][s2.size()+1];
    m=0;
    for(i=0;i<=s1.size();i++)
    {
        for(j=0;j<=s2.size();j++)
        {
            if(!i || !j || s1[i-1]!=s2[j-1])
            dp[i][j]=0;
            else
            dp[i][j]=dp[i-1][j-1]+1;
            if(dp[i][j]>m)
            {
                m=dp[i][j];
                mi=i;
                mj=j;
            }
        }
    }
    cout<<m<<endl;
    i=mi;
    j=mj;
    s="";
    while(i && j && s1[i-1]==s2[j-1])
    {
        s+=s1[i-1];
        i--;
        j--;
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}