//AllocateBooks
#include<iostream>
using namespace std;
bool func(int A[], int N, int m, int K);
int main()
{
    int i, N, K, lo, hi, m, res;
    cin>>N>>K;
    int A[N];
    lo=hi=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        lo=max(lo, A[i]);
        hi+=A[i];
    }
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(func(A, N, m, K))
        {
            res=m;
            hi=m-1;
        }
        else
        lo=m+1;
    }
    cout<<res<<endl;
    return 0;
}
bool func(int A[], int N, int m, int K)
{
    int i, s, c;
    s=c=0;
    for(i=0;i<N;i++)
    {
        s+=A[i];
        if(s>m)
        {
            c++;
            s=A[i];
        }
        if(c>K)
        return false;
    }
    c++;
    if(c>K)
    return false;
    return true;
}