//LongestSubstringWithoutRepeatingCharacters
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int i, j, ma;
    string s;
    unordered_map<char, int>m;
    cin>>s;
    ma=0;
    i=0;
    for(j=0;j<s.size();j++)
    {
        if(!m.count(s[j]))
        m.insert({s[j], j});
        else
        {
            i=max(i, m[s[j]]+1);
            m[s[j]]=j;
        }
        ma=max(ma, j-i+1);
    }
    cout<<ma<<endl;
    return 0;
}