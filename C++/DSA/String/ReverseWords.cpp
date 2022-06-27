//ReverseWords
#include<iostream>
using namespace std;
int main()
{
    int i;
    string s, w, r;
    getline(cin, s);
    w="";
    r="";
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        w+=s[i];
        else if(w!="")
        {
            if(r=="")
            r=w;
            else
            r=w+" "+r;
            w="";
        }
    }
    if(w!="")
    r=w+" "+r;
    cout<<r<<endl;
    return 0;
}