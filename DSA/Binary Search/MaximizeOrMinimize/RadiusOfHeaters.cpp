//RadiusOfHeaters
#include<iostream>
#include<algorithm>
int func(int B[], int M, int n);
using namespace std;
int main()
{
    int i, N, M, m, lb;
    cin>>N>>M;
    int A[N], B[M];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<M;i++)
    cin>>B[i];
    sort(A, A+N);
    sort(B, B+M);
    m=0;
    for(i=0;i<N;i++)
    {
        if(A[i]<=B[0])
        m=max(m, B[0]-A[i]);
        else if(A[i]>=B[M-1])
        m=max(m, A[i]-B[M-1]);
        else
        {
            lb=func(B, M, A[i]);
            m=max(m, min(B[lb]-A[i], A[i]-B[lb-1]));
        }
    }
    cout<<m<<endl;
    return 0;
}
int func(int B[], int M, int n)
{
    int lo, hi, m, res;
    lo=0;
    hi=M-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(n<=B[m])
        {
            res=m;
            hi=m-1;
        }
        else
        lo=m+1;
    }
    return res;
}