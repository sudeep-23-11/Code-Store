//CountSubarraysWithKXor
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int i, N, K, x, c;
    unordered_map<int, int>m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    x=0;
    c=0;
    m.insert({0, 1});
    for(i=0;i<N;i++)
    {
        x^=A[i];
        if(!m.count(x))
        m.insert({x, 1});
        else
        m[x]++;
        if(m.count(x^K))
        c+=m[x^K];
    }
    cout<<c<<endl;
    return 0;
}