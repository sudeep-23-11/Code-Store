//KokoEatingBananas
#include<iostream>
using namespace std;
bool func(int A[], int N, int m, int K);
int main()
{
    int i, N, K, lo, hi, m, res;
    cin>>N>>K;
    int A[N];
    hi=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        hi=max(hi, A[i]);
    }
    lo=1;
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
    int i, s;
    s=0;
    for(i=0;i<N;i++)
    {
        s+=(A[i]/m);
        if(A[i]%m)
        s++;
        if(s>K)
        return false;
    }
    return true;
}