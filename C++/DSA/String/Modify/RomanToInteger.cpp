//RomanToInteger
#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<char, int>m;
int main()
{
    int i, N;
    string s;
    cin>>s;
    m={{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
    N=0;
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
    cout<<N<<endl;
    return 0;
}