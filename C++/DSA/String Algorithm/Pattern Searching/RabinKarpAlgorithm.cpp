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
        hs+=(((int)s.at(i)-96)*pow(3, i));
        hp+=(((int)p.at(i)-96)*pow(3, i));
    }
    for(i=0;i<=(s.size()-p.size());i++)
    {
        if(i!=0)
        {
            hs-=((int)s.at(i-1)-96);
            hs/=3;
            hs+=(((int)s.at(i+p.size()-1)-96)*pow(3, p.size()-1));
        }
        if(hs==hp)
        {
            for(j=0;j<p.size();j++)
            {
                if(p.at(j)!=s.at(i+j))
                break;
            }
            if(j==p.size())
            cout<<"Pattern present at "<<i<<endl;
        }
    }
    return 0;
}