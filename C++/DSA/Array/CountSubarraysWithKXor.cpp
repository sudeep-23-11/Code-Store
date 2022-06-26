//CountSubarraysWithKXor
#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, int>m;
int main()
{
    int i, N, K, x, c;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    x=0;
    c=0;
    for(i=0;i<N;i++)
    {
        x^=A[i];
        if(x==K)
        c++;
        if(m.count(x^K)!=0)
        c+=m[x^K];
        if(m.count(x)==0)
        m.insert(make_pair(x, 1));
        else
        m[x]++;
    }
    cout<<c<<endl;
    return 0;
}