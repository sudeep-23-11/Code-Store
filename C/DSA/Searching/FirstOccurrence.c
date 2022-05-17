//FirstOccurrence
#include<stdio.h>
int main()
{
    int i, N, l, u, m, ele, flag, idx;
    scanf("%d", &N);
    int arr[N];
    for(i=0;i<N;i++)
    scanf("%d", &arr[i]);
    l=0;
    u=N-1;
    flag=0; 
    scanf("%d", &ele);
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele==arr[m])
        {
            flag=1;
            idx=m;
        }
        if(ele<=arr[m])
        u=m-1;
        else
        l=m+1;
    }
    if(flag==1)
    printf("The first occurrence of element %d is present at %d position\n", ele, (idx+1));
    else
    printf("The element %d is not present in the array\n", ele);
    return 0;
}