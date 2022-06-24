//StringPermutation
#include<iostream>
#include<set>
using namespace std;
set<string>st;
void permute(string s, int l, int r);
int main()
{
    string s;
    cin>>s;
    permute(s, 0, s.size()-1);
    for(auto i:st)
    cout<<i<<endl;
    return 0;
}
void permute(string s, int l, int r)
{
    int i;
    if(l==r)
    {
        st.insert(s);
        return;
    }
    for(i=l;i<=r;i++)
    {
        swap(s[l], s[i]);
        permute(s, l+1, r);
        swap(s[l], s[i]);
    }
}