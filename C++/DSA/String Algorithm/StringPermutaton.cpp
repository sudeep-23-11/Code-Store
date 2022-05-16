//StringPermutaion
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
set<string>st;
void permute(string s, int l, int r);
int main()
{
    string S;
    cin>>S;
    permute(S, 0, S.size()-1);
    for(auto i:st)
    cout<<i<<endl;
    cout<<st.size()<<endl;
    return 0;
}
void permute(string s, int l, int r)
{
    int i;
    if(l==r)
    st.insert(s);
    else
    {
        for(i=l;i<=r;i++)
        {
            swap(s[l], s[i]);
            permute(s, l+1, r);
            swap(s[l], s[i]);
        }
    }
}
