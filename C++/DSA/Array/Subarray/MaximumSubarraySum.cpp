//MaximumSubarraySum
//KadaneAlgorithm
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i, N, s, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    s=0;
    m=INT_MIN;
    for(i=0;i<N;i++)
    {
        s+=A[i];
        s=max(s, 0);
        m=max(m, s);
    }
    cout<<m<<endl;
    return 0;
}