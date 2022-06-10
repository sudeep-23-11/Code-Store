//Subsequence
#include<iostream>
using namespace std;
bool subsequence(string X, string Y, int x, int y);
int main()
{
    string s, ss;
    cin>>s>>ss;
    if(subsequence(s, ss, s.size(), ss.size())==1)
    cout<<ss<<" is a subsequence of "<<s<<endl;
    else
    cout<<ss<<" is not a subsequence of "<<s<<endl;
    return 0;
}
bool subsequence(string X, string Y, int x, int y)
{
    if(y==0)
    return true;
    else if(x==0)
    return false;
    else if(X.at(x-1)==Y.at(y-1))
    return subsequence(X, Y, x-1, y-1);
    else 
    return subsequence(X, Y, x-1, y);
}