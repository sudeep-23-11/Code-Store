//ReverseWords
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i;
    string s, w, r;
    getline(cin, s);
    w="";
    r="";
    for(i=(s.size()-1);i>=0;i--)
    {
        if(s[i]!=' ')
        w+=s[i];
        else
        {
            reverse(w.begin(), w.end());
            if(w!="")
            r=r+w+' ';
            w="";
        }
    }
    reverse(w.begin(), w.end());
    if(w!="")
    r=r+w+' ';
    r.pop_back();
    cout<<r<<endl;
    return 0;
}