//PalindromePartitioningI
#include<iostream>
#include<vector>
using namespace std;
void palindrome(string s, int i, vector<string>&v);
bool check(string s, int i, int j);
int main()
{
    string s;
    vector<string>v;
    cin>>s;
    palindrome(s, 0, v);
    return 0;
}
void palindrome(string s, int i, vector<string>&v)
{
    int j;
    if(i==s.size())
    {
        for(j=0;j<v.size();j++)
        cout<<v[j]<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<s.size();j++)
    {
        if(check(s, i, j))
        {
            v.push_back(s.substr(i, j-i+1));
            palindrome(s, j+1, v);
            v.pop_back();
        }
    }
}
bool check(string s, int i, int j)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}