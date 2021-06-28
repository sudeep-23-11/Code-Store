//StringHashing
#include<iostream>
using namespace std;
pair<int, int>Hash(string S);
int main()
{
    string S1, S2;
    pair<int, int>S1h, S2h;
    cin>>S1>>S2;
    S1h=Hash(S1);
    S2h=Hash(S2);
    if((S1h.first==S2h.first)&&(S1h.second==S2h.second))
    cout<<"Equal Strings"<<endl;
    else
    cout<<"Not Equal Strings"<<endl;
    return 0;
}
pair<int, int>Hash(string S)
{
    int i, b, b1, b2, m1, m2, c;
    b=2;
    b1=2;
    b2=2;
    m1=(int)(1e9+7);
    m2=(int)(1e9+9);
    pair<int, int>h=make_pair(0, 0);
    for(i=0;i<S.size();i++)
    {
        c=(int)S.at(i)-96;
        h.first+=((c*b1)%m1);
        h.first%=m1;
        b1*=b;
        b1%=m1;
        h.second+=((c*b2)%m2);
        h.second%=m2;
        b2*=b;
        b2%=m2;
    }
    return h;
}