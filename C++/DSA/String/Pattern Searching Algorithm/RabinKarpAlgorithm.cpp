//RabinKarpAlgorithm
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, j, hs, hp;
    string s, p;
    cin>>s>>p;
    hs=0;
    hp=0;
    for(i=0;i<p.size();i++)
    {
        hs+=((s[i]-'a'+1)*pow(3, i));
        hp+=((p[i]-'a'+1)*pow(3, i));
    }
    for(i=0;i<=(s.size()-p.size());i++)
    {
        if(i!=0)
        {
            hs-=(s[i-1]-'a'+1);
            hs/=3;
            hs+=((s[i+p.size()-1]-'a'+1)*pow(3, p.size()-1));
        }
        if(hs==hp)
        {
            for(j=0;j<p.size();j++)
            {
                if(p[j]!=s[i+j])
                break;
            }
            if(j==p.size())
            cout<<"Pattern present at "<<i<<endl;
        }
    }
    return 0;
}