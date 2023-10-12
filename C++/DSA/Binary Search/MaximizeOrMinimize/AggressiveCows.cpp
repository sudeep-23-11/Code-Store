//AggressiveCows
#include<iostream>
#include<algorithm>
using namespace std;
bool func(int A[], int N, int m, int K);
int main()
{
    int i, N, K, lo, hi, m, res;
    cin>>N>>K;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    sort(A, A+N);
    lo=0;
    for(i=1;i<N;i++)
    lo=min(lo, A[i]-A[i-1]);
    hi=A[N-1]-A[0];
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(func(A, N, m, K))
        {
            res=m;
            lo=m+1;
        }
        else
        hi=m-1;
    }
    cout<<res<<endl;
    return 0;
}
bool func(int A[], int N, int m, int K)
{
    int i, j, c;
    c=1;
    for(i=0;i<N;i++)
    {
        j=i+1;
        while(j<N && A[j]-A[i]<m)
        j++;
        if(j<N)
        c++;
        if(c==K)
        return true;
        i=j-1;
    }
    return false;
}