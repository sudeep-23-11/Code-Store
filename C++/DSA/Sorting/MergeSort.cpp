//MergeSort
#include<iostream>
using namespace std;
void mergesort(int A[], int l, int r);
void merge(int A[], int l, int m, int r);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    mergesort(A, 0, N-1);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
void mergesort(int A[], int l, int r)
{
    int m;
    if(l==r)
    return;
    m=(l+r)/2;
    mergesort(A, l, m);
    mergesort(A, m+1, r);
    merge(A, l, m, r);
}
void merge(int A[], int l, int m, int r)
{
    int i, j, k;
    int B[r-l+1];
    i=l;
    j=m+1;
    k=0;
    while(i<=m && j<=r)
    {
        if(A[i]<=A[j])
        {
            B[k]=A[i];
            i++;
        }
        else
        {
            B[k]=A[j];
            j++;
        }
        k++;
    }
    while(i<=m)
    {
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        B[k]=A[j];
        j++;
        k++;
    }
    for(i=0;i<r-l+1;i++)
    A[l+i]=B[i];
}