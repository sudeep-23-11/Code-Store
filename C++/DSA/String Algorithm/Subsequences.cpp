//Subsequences
#include<iostream>
using namespace std;
bool Subsequence(string X, string Y, int x, int y);
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    if(Subsequence(S1, S2, S1.size(), S2.size())==1)
    cout<<S2<<" is a subsequence of "<<S1<<endl;
    else
    cout<<S2<<" is not a subsequence of "<<S1<<endl;
    return 0;
}
bool Subsequence(string X, string Y, int x, int y)
{
    if(y==0)
    return true;
    else if(x==0)
    return false;
    else if(X.at(x-1)==Y.at(y-1))
    return Subsequence(X, Y, x-1, y-1);
    else 
    return Subsequence(X, Y, x-1, y);
}