//BucketSort
#include<stdio.h>
#include<string.h>
void bucketsort(int A[], int n);
int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    bucketsort(arr, N);
    for(i=0;i<N;i++)
    printf("%d ", arr[i]);
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