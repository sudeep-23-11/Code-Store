//BucketSort
#include<iostream>
#include<cstring>
using namespace std;
void bucketsort(int A[], int n);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    bucketsort(A, N);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}
void bucketsort(int A[], int n)
{
    int i, j, max;
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    int buck[max+1];
    memset(buck, 0, sizeof(buck));
    for(i=0;i<n;i++)
    buck[A[i]]++;
    for(i=0, j=0;i<=max;i++)  
    {  
        while(buck[i]>0)  
        {  
            A[j]=i; 
            buck[i]--;
            j++;
        }  
    }
}