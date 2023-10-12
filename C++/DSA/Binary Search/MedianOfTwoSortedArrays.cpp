//MedianOfTwoSortedArrays
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int i, N, M, n, lo, hi, m, l1, l2, r1, r2;
    cin>>N>>M;
    vector<int>A(N), B(M);
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<M;i++)
    cin>>B[i];
    if(!N)
    {
        if(M%2)
        cout<<B[M/2]<<endl;
        else
        cout<<(B[M/2-1]+B[M/2])/2.0<<endl;
        exit(0);
    }
    if(!M)
    {
        if(N%2)
        cout<<A[N/2]<<endl;
        else
        cout<<(A[N/2-1]+A[N/2])/2.0<<endl;
        exit(0);
    }
    if(N>M)
    {
        swap(A, B);
        swap(N, M);
    }
    n=(N+M)/2;
    lo=0;
    hi=N;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        l1=m>0 ? A[m-1] : INT_MIN;
        r1=m<N ? A[m] : INT_MAX;
        l2=n-m>0 ? B[n-m-1] : INT_MIN;
        r2=n-m<M ? B[n-m] : INT_MAX;
        if(l1<=r2 && l2<=r1)
        break;
        else if(l1>r2)
        hi=m-1;
        else
        lo=m+1;
    }
    if((N+M)%2)
    cout<<min(r1, r2)<<endl;
    else
    cout<<(max(l1, l2)+min(r1, r2))/2.0<<endl;
    return 0;
}