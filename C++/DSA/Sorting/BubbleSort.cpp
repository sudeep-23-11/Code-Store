//BubbleSort
#include<iostream>
using namespace std;
int main()
{
    int i, j, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        for(j=0;j<(N-1);j++)
        {
            if(A[j]>A[j+1])
            swap(A[j], A[j+1]);
        }
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}