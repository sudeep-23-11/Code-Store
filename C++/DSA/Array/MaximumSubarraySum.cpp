//MaximumSubarraySum
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
        m=max(m, s);
        s=max(s, 0);
    }
    cout<<m<<endl;
    return 0;
}