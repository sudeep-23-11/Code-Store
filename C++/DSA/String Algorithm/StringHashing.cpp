//StringHashing
#include<iostream>
#include<set>
using namespace std;
set<pair<int, int>>Hash;
pair<int, int> Hashing(string S);
int main()
{
    int N, Q;
    string S;
    cin>>N;
    while(N--)
    {
        cin>>S;
        pair<int, int>H=Hashing(S);
        Hash.insert(H);
    }
    cin>>Q;
    while(Q--)
    {
        cin>>S;
        pair<int, int>H=Hashing(S);
        if(Hash.count(H)!=0)
        cout<<"Present"<<endl;
        else
        cout<<"Not Present"<<endl;
    }
    return 0;
}
pair<int, int> Hashing(string S)
{
    int i, b, b1, b2, m1, m2, c;
    b=2;
    b1=2;
    b2=2;
    m1=(int)(1e9+7);
    m2=(int)(1e9+9);
    pair<int, int>H=make_pair(0, 0);
    for(i=0;i<S.size();i++)
    {
        c=(int)S.at(i)-96;
        H.first+=((c*b1)%m1);
        H.first%=m1;
        H.second+=((c*b2)%m2);
        H.second%=m2;
        b1*=b;
        b1%=m1;
        b2*=b;
        b2%=m2;
    }
    return H;
}