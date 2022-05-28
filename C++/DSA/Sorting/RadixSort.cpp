//RadixSort
#include<iostream>
#include<cstring>
using namespace std;
void radixsort(int A[], int n);
void countingsort(int A[], int n, int exp);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    radixsort(A, N);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}
void radixsort(int A[], int n)
{
    int i, max, exp;
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    for(exp=1;(max/exp)>0;exp*=10)
    countingsort(A, n, exp);
}
void countingsort(int A[], int n, int exp)
{
    int i;
    int count[10], B[n];
    memset(count, 0, sizeof(count));
    for(i=0;i<n;i++)
    count[(A[i]/exp)%10]++;
    for(i=1;i<10;i++)
    count[i]+=count[i-1];
    for(i=(n-1);i>=0;i--)
    {
        B[count[(A[i]/exp)%10]-1]=A[i];
        count[(A[i]/exp)%10]--;
    }
    for(i=0;i<n;i++)
    A[i]=B[i];
}