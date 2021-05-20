//Subsequences
#include<iostream>
#include<algorithm>
using namespace std;
int Seq1(string X, string Y, int x, int y);
bool Seq2(string X, string Y, int x, int y);
int main()
{
    string S1, S2;
    cin>>S1>>S2;
    cout<<Seq1(S1, S2, S1.size(), S2.size())<<endl;
    if(Seq2(S1, S2, S1.size(), S2.size())==1)
    cout<<"Subsequence"<<endl;
    else
    cout<<"Not a Subsequence"<<endl;
    return 0;
}
int Seq1(string X, string Y, int x, int y)
{
    if(x==0||y==0)
    return 0;
    else if(X.at(x-1)==Y.at(y-1))
    return (1+Seq1(X, Y, x-1, y-1));
    else
    return (max(Seq1(X, Y, x-1, y), Seq1(X, Y, x, y-1)));
}
bool Seq2(string X, string Y, int x, int y)
{
    if(y==0)
    return true;
    else if(x==0)
    return false;
    else if(X.at(x-1)==Y.at(y-1))
    return (Seq2(X, Y, x-1, y-1));
    else 
    return (Seq2(X, Y, x-1, y));
}