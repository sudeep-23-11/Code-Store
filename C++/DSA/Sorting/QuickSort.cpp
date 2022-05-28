//QuickSort
#include<iostream>
using namespace std;
int partiton(int A[], int l, int r);
void quicksort(int A[], int l, int r);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    quicksort(A, 0, N-1);    
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}
int partition(int A[], int l, int r)
{
    int i, j, pi;
    pi=A[r];
    i=(l-1);
    for(j=l;j<=r-1;j++)
    {
        if(A[j]<pi)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return (i+1);
}
void quicksort(int A[], int l, int r)
{
    int pa;
    if(l>=r)
    return;
    pa=partition(A, l, r);
    quicksort(A, l, pa-1);
    quicksort(A, pa+1, r);
}