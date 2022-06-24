//MaxSubarraySum
//KadaneAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, s, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    s=0;
    m=0;
    for(i=0;i<N;i++)
    {
        s+=A[i];
        if(s<0)
        s=0;
        m=max(m, s);
    }
    cout<<m<<endl;
    return 0;
}