//KthMissingPositiveNumber
#include<iostream>
using namespace std;
int main()
{
    int i, N, K, lo, hi, m, mi;
    cin>>N>>K;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        mi=A[m]-m-1;
        if(K<=mi)
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<hi+1+K<<endl;
    return 0;
}