//SearchInRotatedSortedArrayII
#include<iostream>
using namespace std;
int main()
{
    int i, N, e, lo, hi, m, res;
    cin>>N>>e;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-1;
    res=-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(A[m]==e)
        {
            res=m;
            break;
        }
        else if(A[m]==A[lo] && A[m]==A[hi])
        {
            hi--;
            lo++;
        }
        else if(A[lo]<=A[m])
        {
            if(A[lo]<=e && e<A[m])
            hi=m-1;
            else
            lo=m+1;
        }
        else
        {
            if(A[m]<e && e<=A[hi])
            lo=m+1;
            else
            hi=m-1;
        }
    }
    cout<<res<<endl;
    return 0;
}