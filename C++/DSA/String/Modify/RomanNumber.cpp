//RomanNumber
#include<iostream>
#include<unordered_map>
using namespace std;
int integer(string s);
string roman(int N);
int main()
{
    int N;
    string s, r;
    cin>>s;
    N=integer(s);
    r=roman(N);
    cout<<N<<" "<<r<<endl;
    return 0;
}
int integer(string s)
{
    int i, N;
    unordered_map<char, int>m;
    N=0;
    m={{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
    for(i=0;i<s.size();i++)
    {
        if((i<s.size()-1)&&(m[s[i]]<m[s[i+1]]))
        {
            N+=(m[s[i+1]]-m[s[i]]);
            i++;
        }
        else
        N+=m[s[i]];
    }
    return N;
}
string roman(int N)
{
    int i, c;
    string s;
    pair<int, string>A[]={{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    c=0;
    s="";
    for(i=0;i<13;i++)
    {
        while(N>=A[i].first)
        {
            c++;
            N-=A[i].first;
        }
        while(c!=0)
        {
            s+=A[i].second;
            c--;
        }
    }
    return s;
}