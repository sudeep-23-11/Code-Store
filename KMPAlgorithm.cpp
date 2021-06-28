//KMPAlgorithm
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, j;
    string S;
    vector<int>pi;
    cin>>S;
    pi.resize(S.size(), 0);
    for(i=1;i<S.size();i++)
    {
        j=pi[i-1];
        while(j>0&&(S.at(i)!=S.at(j)))
        j=pi[j-1];
        pi[i]=j;
        if(S.at(i)==S.at(j))
        pi[i]++;
    }
    for(i=0;i<S.size();i++)
    cout<<pi[i]<<" ";
    cout<<endl;
    return 0;
}