//KnuthMorrisPrattAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    string s, p;
    cin>>s>>p;
    int lps[p.size()];
    i=1;
    j=0;
    lps[0]=0;
    while(i!=p.size())
    {
        if(p.at(i)==p.at(j))
        {
            j++;
            lps[i]=j;
            i++;
        }
        else if(j!=0)
        j=lps[j-1];
        else
        {
            lps[i]=0;
            i++;
        }
    }
    i=0;
    j=0;
    while(i!=s.size())
    {
        if(s.at(i)==p.at(j))
        {
            i++;
            j++;
        }
        else if(j!=0)
        j=lps[j-1];
        else
        i++;
        if(j==p.size())
        {
            cout<<"Pattern present at "<<(i-j)<<endl;
            j=lps[j-1];
        }
    }
    return 0;
}