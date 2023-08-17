//CountInversions
#include<iostream>
using namespace std;
void mergesort(int A[], int l, int r, int &c1, int &c2);
void merge(int A[], int l, int m, int r, int &c1, int &c2);
int main()
{
    int i, N, c1, c2;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    c1=0;
    c2=0;
    mergesort(A, 0, N-1, c1, c2);
    cout<<"A[i]>A[j], j>i "<<c1<<endl;
    cout<<"A[i]>A[j]*2, j>i "<<c2<<endl;
    return 0;
}
void mergesort(int A[], int l, int r, int &c1, int &c2)
{
    int m;
    if(l==r)
    return;
    m=(l+r)/2;
    mergesort(A, l, m, c1, c2);
    mergesort(A, m+1, r, c1, c2);
    merge(A, l, m, r, c1, c2);
}
void merge(int A[], int l, int m, int r, int &c1, int &c2)
{
    int i, j, k;
    j=m+1;
    for(i=l;i<=m;i++)
    {
        while(j<=r && A[i]>A[j]*2)
        j++;
        c2+=(j-m-1);
    }
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
            c1+=(m-i);
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