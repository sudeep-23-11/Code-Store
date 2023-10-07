//FractionToDecimal
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n, d, r;
    string s;
    unordered_map<int, int>mp;
    cin>>n>>d;
    if(n*d < 0)
    s="-";
    else
    s="";
    if(n<0)
    n*=-1;
    if(d<0)
    d*=-1;
    s+=to_string(n/d);
    r=n%d;
    if(r)
    s+='.';
    while(r)
    {
        n=r*10;
        s+=to_string(n/d);
        r=n%d;
        if(mp.count(r))
        {
            s.insert(mp[r], "(");
            s.push_back(')');
            goto l;
        }
        mp.insert({r, s.size()});
    }
    l: cout<<s<<endl;
    return 0;
}