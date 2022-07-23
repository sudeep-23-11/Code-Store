//AnagramCheck
#include<iostream>
#include<cstring>
using namespace std;
bool anagram(string X, string Y);
int main()
{
    int i;
    string s1, s2;
    cin>>s1>>s2;
    if(anagram(s1, s2)==true)
    cout<<"Anagram present"<<endl;
    else
    cout<<"Anagram not present"<<endl;
    return 0;
}
bool anagram(string X, string Y)
{
    int i;
    if(X.size()!=Y.size())
    return false;
    int f[26];
    memset(f, 0, sizeof(f));
    for(i=0;i<X.size();i++)
    {
        f[X[i]-'a']++;
        f[Y[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        if(f[i]!=0)
        return false;
    }
    return true;
}