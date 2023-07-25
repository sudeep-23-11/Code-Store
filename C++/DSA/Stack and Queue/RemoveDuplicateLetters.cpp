//RemoveDuplicateLetters
#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    int i;
    string s, r;
    bool p[26];
    int f[26];
    stack<char>st;
    cin>>s;
    memset(p, false, sizeof(p));
    memset(f, 0, sizeof(f));
    for(i=0;i<s.size();i++)
    f[s[i]-'a']++;
    for(i=0;i<s.size();i++)
    {
        f[s[i]-'a']--;
        if(p[s[i]-'a'])
        continue;
        while(!st.empty() && f[st.top()-'a']>0 && st.top()>s[i])
        {
            p[st.top()-'a']=false;
            st.pop();
        }
        p[s[i]-'a']=true;
        st.push(s[i]);
    }
    r="";
    while(!st.empty())
    {
        r=st.top()+r;
        st.pop();
    }
    cout<<r<<endl;;
    return 0;
}