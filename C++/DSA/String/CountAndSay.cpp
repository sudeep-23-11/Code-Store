//CountAndSay
#include<iostream>
using namespace std;
string countsay(int N);
int main()
{
    int N;
    cin>>N;
    cout<<countsay(N)<<endl;
    return 0;
}
string countsay(int N)
{
    int i, c;
    string s, r;
    if(N==1)
    return "1";
    s=countsay(N-1);
    r="";
    i=0;
    while(i<s.size())
    {
        c=0;
        while(((i+c)<s.size())&&(s[i]==s[i+c]))
        c++;
        r+=to_string(c);
        r+=s[i];
        i+=c;
    }
    return r;
}