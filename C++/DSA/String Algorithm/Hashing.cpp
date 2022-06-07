//Hashing
#include<iostream>
#include<set>
using namespace std;
set<pair<int, int>>st;
pair<int, int>_hash(string S);
int main()
{
    int N;
    string S;
    cin>>N;
    while(N--)
    {
        cin>>S;
        st.insert(_hash(S));
    }
    cin>>N;
    while(N--)
    {
        cin>>S;
        if(st.count(_hash(S))!=0)
        cout<<"Present"<<endl;
        else
        cout<<"Not Present"<<endl;
    }
    return 0;
}
pair<int, int>_hash(string S)
{
    int i, c, b1, b2, m1, m2;
    b1=31;
    b2=31;
    m1=(int)(1e9+7);
    m2=(int)(1e9+9);
    pair<int, int>h=make_pair(0, 0);
    for(i=0;i<S.size();i++)
    {
        c=(int)S.at(i)-96;
        h.first+=((c*b1)%m1);
        h.first%=m1;
        h.second+=((c*b2)%m2);
        h.second%=m2;
        b1*=31;
        b1%=m1;
        b2*=31;
        b2%=m2;
    }
    return h;
}