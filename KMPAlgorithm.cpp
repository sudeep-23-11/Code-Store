//KMPAlgorithm
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j, s;
    string S1, S2, S;
    cin>>S1>>S2;
    s=0;
    S=S2+'#'+S1;
    int pi[S.size()];
    memset(pi, 0, sizeof(pi));
    for(i=1;i<S.size();i++)
    {
        j=pi[i-1];
        while((j>0)&&(S.at(i)!=S.at(j)))
        j=pi[j-1];
        pi[i]=j;
        if(S.at(i)==S.at(j))
        pi[i]++;
    }
    for(i=0;i<S.size();i++)
    {
        if(pi[i]==S2.size())
        s++;
        cout<<pi[i]<<" ";
    }
    cout<<endl<<s<<endl;
    return 0;
}