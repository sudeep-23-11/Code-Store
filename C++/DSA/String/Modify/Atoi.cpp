//Atoi
#include<iostream>
#include<cctype>
#include<climits>
using namespace std;
int atoi(string s);
int main()
{
    string s;
    getline(cin, s);
    cout<<atoi(s)<<endl;
    return 0;
}
int atoi(string s)
{
    bool f;
    int i;
    long long n;
    f=false;
    i=0;
    n=0;
    while(s[i]==' ')
    i++;
    if((s[i]=='+')||(s[i]=='-'))
    {
        if(s[i]=='-')
        f=true;
        i++;
    }
    while(isdigit(s[i])!=0)
    {
        n=(n*10)+(s[i]-'0');
        if((f==false)&&(n>INT_MAX))
        return INT_MAX;
        if((f==true)&&((n*-1)<INT_MIN))
        return INT_MIN;
        i++;
    }
    if(f==true)
    return n*-1;
    return n;
}