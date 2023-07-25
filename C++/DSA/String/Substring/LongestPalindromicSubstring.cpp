//LongestPalindromicSubstring
#include<iostream>
using namespace std;
int palindrome(string &s, int i, int j);
int main()
{
    int i, m, l;
    string s, r;
    cin>>s;
    l=0;
    for(i=0;i<s.size();i++)
    {
        m=max(palindrome(s, i, i), palindrome(s, i-1, i));
        if(m>l)
        {
            l=m;
            r=s.substr(i-l/2, l);
        }
    }
    cout<<r<<endl;
    return 0;
}
int palindrome(string &s, int i, int j)
{
    while(i>=0 && j<s.size() && s[i]==s[j])
    {
        i--;
        j++;
    }
    return j-i-1;
}