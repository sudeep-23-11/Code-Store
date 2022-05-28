//CountingSort
#include<iostream>
#include<cstring>
using namespace std;
void countingsort(int A[], int n);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    countingsort(A, N);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}
void countingsort(int A[], int n)
{
    int i, max, min, range;
    max=A[0];
    min=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
        if(min>A[i])
        min=A[i];
    }
    range=max-min+1;
    int count[range], A[n];
    memset(count, 0, sizeof(count));
    for(i=0;i<n;i++)
    count[A[i]-min]++;
    for(i=1;i<range;i++)
    count[i]+=count[i-1];
    for(i=(n-1);i>=0;i--)
    {
        A[count[A[i]-min]-1]=A[i];
        count[A[i]-min]--;
    }
    for(i=0;i<n;i++)
    A[i]=A[i];
}