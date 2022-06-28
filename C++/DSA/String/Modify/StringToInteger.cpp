//StringToInteger
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    bool n;
    int i;
    long long N;
    string s;
    getline(cin, s);
    n=false;
    i=0;
    while((s[i]==' ')||(s[i]=='+'))
    i++;
    if(s[i]=='-')
    {
        n=true;
        i++;
    }
    N=0;
    while((i<s.size())&&(s[i]>='0')&&(s[i]<='9'))
    {
        N=N*10+(s[i]-'0');
        i++;
    }
    if(n==true)
    N=-N;
    if(N>INT_MAX)
    N=INT_MAX;
    if(N<INT_MIN)
    N=INT_MIN;
    cout<<N<<endl;
    return 0;
}