//SingleElementInSortedArray
#include<iostream>
using namespace std;
int main()
{
    int i, N, lo, hi, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-2;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(((m%2==0)&&(A[m]==A[m+1]))||((m%2==1)&&(A[m]==A[m-1])))
        lo=m+1;
        else
        hi=m-1;
    }
    cout<<A[lo]<<endl;
    return 0;
}