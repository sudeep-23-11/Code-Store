//CountInversions
#include<iostream>
using namespace std;
int c1, c2;
void merge(int A[], int l, int m, int r);
void mergesort(int A[], int l, int r);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    c1=0;
    c2=0;
    mergesort(A, 0, N-1);
    cout<<"A[i]>A[j], j>i "<<c1<<endl;
    cout<<"A[i]>(A[j]*2), j>i "<<c2<<endl;
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
    j=0;
    for(i=0;i<nl;i++)
    {
        while((j<nr)&&(lA[i]>(rA[j]*2)))
        j++;
        c2+=j;
    }
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
            c1+=(nl-i);
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