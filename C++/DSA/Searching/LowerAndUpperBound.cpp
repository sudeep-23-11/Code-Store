//LowerAndUpperBound
#include<iostream>
using namespace std;
void lowerbound(int A[], int N, int e);
void upperbound(int A[], int N, int e);
int main()
{
    int i, N, e;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>e;
    lowerbound(A, N, e);
    upperbound(A, N, e);
    return 0;
}
void lowerbound(int A[], int N, int e)
{
    int lo, hi, m;
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
    if(A[lo]>=e)
    cout<<"Lower Bound of "<<e<<" is "<<lo<<endl;
    else if(A[hi]>=e)
    cout<<"Lower Bound of "<<e<<" is "<<hi<<endl;
    else
    cout<<"Not present"<<endl;
}
void upperbound(int A[], int N, int e)
{
    int lo, hi, m;
    lo=0;
    hi=N-1;
    while((hi-lo)>1)
    {
        m=(lo+hi)/2;
        if(e>=A[m])
        lo=m+1;
        else
        hi=m;
    }
    if(A[lo]>e)
    cout<<"Upper Bound of "<<e<<" is "<<lo<<endl;
    else if(A[hi]>e)
    cout<<"Upper Bound of "<<e<<" is "<<hi<<endl;
    else
    cout<<"Not present"<<endl;
}

//LowerBound - FirstOccurrence, LargestElementSmallerThan
//UpperBound - LastOccurrence, SmallestElementGreaterThan