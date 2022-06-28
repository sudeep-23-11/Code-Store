//SubsequenceCheck
#include<iostream>
using namespace std;
bool subsequence(string X, string Y, int x, int y);
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    if(subsequence(s1, s2, s1.size()-1, s2.size()-1)==true)
    cout<<"Subsequence present"<<endl;
    else
    cout<<"Subsequence not present"<<endl;
    return 0;
}
bool subsequence(string X, string Y, int x, int y)
{
    if(y<0)
    return true;
    if(x<0)
    return false;
    if(X.at(x)==Y.at(y))
    return subsequence(X, Y, x-1, y-1);
    return subsequence(X, Y, x-1, y);
}