//SearchElementInRotatedSortedArray
#include<iostream>
using namespace std;
int main()
{
    int i, N, e, lo, hi, m;
    cin>>N>>e;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(A[m]==e)
        break;
        if(A[lo]<=A[m])
        {
            if(e>=A[lo] && e<=A[m])
            hi=m-1;
            else
            lo=m+1;
        }
        else
        {
            if(e>=A[m] && e<=A[hi])
            lo=m+1;
            else
            hi=m-1;
        }
    }
    if(lo<=hi)
    cout<<m<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}