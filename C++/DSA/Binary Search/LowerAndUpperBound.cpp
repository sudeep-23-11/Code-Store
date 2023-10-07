//LowerAndUpperBound
#include<iostream>
using namespace std;
void lb(int A[], int N, int e);
void ub(int A[], int N, int e);
int main()
{
    int i, N, e;
    cin>>N>>e;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Lower Bound"<<endl;
    lb(A, N, e);
    // cout<<"Upper Bound"<<endl;
    // ub(A, N, e);
    return 0;
}
void lb(int A[], int N, int e)
{
    int lo, hi, m, res;
    lo=0;
    hi=N-1;
    res=-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(e<=A[m])
        {
            res=m;
            hi=m-1;
        }
        else
        lo=m+1;
    }
    cout<<res<<endl;
}
void ub(int A[], int N, int e)
{
    int lo, hi, m, res;
    lo=0;
    hi=N-1;
    res=-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(e<A[m])
        {
            res=m;
            hi=m-1;
        }
        else
        lo=m+1;
    }
    cout<<res<<endl;
}