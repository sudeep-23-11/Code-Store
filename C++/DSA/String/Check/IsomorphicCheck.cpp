//IsomorphicCheck
#include<iostream>
#include<cstring>
using namespace std;
bool isomorphic(string X, string Y);
int main()
{
    int i;
    string s1, s2;
    cin>>s1>>s2;
    if(isomorphic(s1, s2)==true)
    cout<<"Isomorphic present"<<endl;
    else
    cout<<"Isomorphic not present"<<endl;
    return 0;
}
bool isomorphic(string X, string Y)
{
    int i;
    if(X.size()!=Y.size())
    return false;
    int fx[27], ft[27];
    memset(fx, 0, sizeof(fx));
    memset(ft, 0, sizeof(ft));
    for(i=0;i<X.size();i++)
    {
        if((fx[X[i]-'a'+1]==0)&&(ft[Y[i]-'a'+1]==0))
        {
            fx[X[i]-'a'+1]=Y[i]-'a'+1;
            ft[Y[i]-'a'+1]=X[i]-'a'+1;
        }
        if((fx[X[i]-'a'+1]!=Y[i]-'a'+1)||(ft[Y[i]-'a'+1]!=X[i]-'a'+1))
        return false;
    }
    return true;
}