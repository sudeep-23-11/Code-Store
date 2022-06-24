//NextPermutation
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    i=N-2;
    while((i>=0)&&(A[i]>=A[i+1]))
    i--;
    if(i!=-1)
    {
        j=N-1;
        while(A[j]<=A[i])
        j--;
        swap(A[i], A[j]);
    }
    reverse(A+i+1, A+N);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}