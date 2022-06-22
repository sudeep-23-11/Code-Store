//StringPermutation
#include<iostream>
using namespace std;
void permute(string s, int l, int r);
int main()
{
    string s;
    cin>>s;
    permute(s, 0, (s.size()-1));
    return 0;
}
void permute(string s, int l, int r)
{
    int i;
    if(l==r)
    {
        cout<<s<<endl;
        return;
    }
    for(i=l;i<=r;i++)
    {
        swap(s[l], s[i]);
        permute(s, l+1, r);
        swap(s[l], s[i]);
    }
}