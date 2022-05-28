//MergeSort
#include<iostream>
using namespace std;
void merge(int A[], int l, int m, int r);
void mergesort(int A[], int l, int r);
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
    return 0;
}
void merge(int A[], int l, int m, int r)
{
    int i, j, k, nl, nr;
    nl=m-l+1; 
    nr=r-m;
    int lA[nl], rA[nr];
    for(i=0;i<nl;i++)
    lA[i]=A[l+i];
    for(j=0;j<nr;j++)
    rA[j]=A[m+1+j];
    i=0; 
    j=0; 
    k=l;
    while((i<nl)&&(j<nr))
    {
        if(lA[i]<=rA[j]) 
        {
            A[k]=lA[i];
            i++;
        }
        else
        {
            A[k]=rA[j];
            j++;
        }
        k++;
    }
    while(i<nl) 
    {       
        A[k]=lA[i];
        i++;
        k++;
    }
    while(j<nr) 
    {    
        A[k]=rA[j];
        j++;
        k++;
    }
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