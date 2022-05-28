//ArrayDeletion
#include<iostream>
using namespace std;
int main()
{
    int i, N, pos;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>pos;
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    for(i=pos;i<(N-1);i++)
    A[i]=A[i+1];
    for(i=0;i<(N-1);i++)
    cout<<A[i]<<" ";
    return 0;
}