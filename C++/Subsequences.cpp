//Subsequences
#include<iostream>
#include<algorithm>
using namespace std;
bool Subsequence(string X, string Y, int x, int y);
int lcs(string X, string Y, int x, int y);
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    if(Subsequence(S1, S2, S1.size(), S2.size())==1)
    cout<<"Subsequence"<<endl;
    else
    cout<<"Not a Subsequence"<<endl;
    cout<<lcs(S1, S2, S1.size(), S2.size())<<endl;
    return 0;
}
bool Subsequence(string X, string Y, int x, int y)
{
    if(y==0)
    return true;
    else if(x==0)
    return false;
    else if(X.at(x-1)==Y.at(y-1))
    return (Subsequence(X, Y, x-1, y-1));
    else 
    return (Subsequence(X, Y, x-1, y));
}
int lcs(string X, string Y, int x, int y)
{
    if((x==0)||(y==0))
    return 0;
    else if(X.at(x-1)==Y.at(y-1))
    return (lcs(X, Y, x-1, y-1)+1);
    else
    return (max(lcs(X, Y, x-1, y), lcs(X, Y, x, y-1)));
}