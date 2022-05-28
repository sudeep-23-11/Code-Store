//ArrayInsertion
#include<iostream>
using namespace std;
int main()
{
    int i, N, ele, pos;
    cin>>N;
    int A[N];
    for(i=0;i<(N-1);i++)
    cin>>A[i];
    cin>>ele>>pos;
    for(i=0;i<(N-1);i++)
    cout<<A[i]<<" ";
    cout<<endl;
    for(i=(N-1);i>=pos;i--)
    A[i]=A[i-1];
    A[pos-1]=ele;
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}