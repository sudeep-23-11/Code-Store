//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, e, lo, hi, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>e;
    lo=0;
    hi=N-1;
    while((hi-lo)>1)
    {
        m=(lo+hi)/2;
        if(e>A[m])
        lo=m+1;
        else
        hi=m;
    }
    if(A[lo]==e)
    cout<<"Index of "<<e<<" is "<<lo<<endl;
    else if(A[hi]==e)
    cout<<"Index of "<<e<<" is "<<hi<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}