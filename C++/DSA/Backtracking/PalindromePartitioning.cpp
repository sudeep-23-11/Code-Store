//PalindromePartitioning
#include<iostream>
#include<vector>
using namespace std;
vector<string>v;
void palindrome(string s, int i);
bool check(string s, int i, int j);
int main()
{
    string s;
    cin>>s;
    palindrome(s, 0);
    return 0;
}
void palindrome(string s, int i)
{
    int j;
    if(i==s.size())
    {
        for(auto j:v)
        cout<<j<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<s.size();j++)
    {
        if(check(s, i, j)==true)
        {
            v.push_back(s.substr(i, (j-i+1)));
            palindrome(s, j+1);
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