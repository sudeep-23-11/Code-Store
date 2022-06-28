//MakePalindrome
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j;
    string s, r;
    cin>>s;
    r=s+"$";
    reverse(s.begin(), s.end());
    r+=s;
    int lps[r.size()];
    i=1;
    j=0;
    lps[0]=0;
    while(i!=r.size())
    {
        if(r[i]==r[j])
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
    cout<<(s.size()-lps[r.size()-1])<<endl;
    return 0;
}