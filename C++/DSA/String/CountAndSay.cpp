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
    char ch;
    string s, r;
    if(N==1)
    return "1";
    s=countsay(N-1);
    r="";
    ch=s[0];
    c=1;
    for(i=1;i<s.size();i++)
    {
        if(s[i]==ch)
        c++;
        else
        {
            r+=(to_string(c)+ch);
            ch=s[i];
            c=1;
        }
    }
    r+=(to_string(c)+ch);
    return r;
}