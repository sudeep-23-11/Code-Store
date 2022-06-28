//AnagramCheck
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    string s1, s2;
    cin>>s1>>s2;
    int f[26];
    memset(f, 0, sizeof(f));
    for(i=0;i<max(s1.size(), s2.size());i++)
    {
        if(i<s1.size())
        f[s1[i]-'a']++;
        if(i<s2.size())
        f[s2[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        if(f[i]!=0)
        break;
    }
    if(i<26)
    cout<<"Anagram not present"<<endl;
    else
    cout<<"Anagram present"<<endl;
    return 0;
}