//ExcelSheetColumn
#include<iostream>
#include<algorithm>
using namespace std;
int number(string s);
string title(int N);
int main()
{
    int N;
    string s, r;
    cin>>s;
    N=number(s);
    r=title(N);
    cout<<N<<" "<<r<<endl;
    return 0;
}
int number(string s)
{
    int i, N, p;
    N=0;
    p=1;
    for(i=(s.size()-1);i>=0;i--)
    {
        N+=(p*(s[i]-'A'+1));
        p*=26;
    }
    return N;
}
string title(int N)
{
    int d;
    string s;
    s="";
    while(N!=0)
    {
        d=N%26;
        if(d!=0)
        s+=(char)(64+d);
        else
        s+='Z';
        N/=26;
        if(d==0)
        N--;
    }
    reverse(s.begin(), s.end());
    return s;
}