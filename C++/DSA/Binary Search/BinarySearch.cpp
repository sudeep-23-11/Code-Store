//BinarySearch
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
    while(hi-lo > 1)
    {
        m=(lo+hi)/2;
        if(e<=A[m])
        hi=m;
        else
        lo=m+1;
    }
    if(A[lo]==e)
    cout<<lo<<endl;
    else if(A[hi]==e)
    cout<<hi<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}