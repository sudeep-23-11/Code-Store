//BubbleSort
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, t;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        for(j=0;j<(N-1);j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}