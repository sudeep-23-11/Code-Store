//ReverseArray
#include<iostream>
using namespace std;
void reverse(int A[], int N, int i);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    reverse(A, N, 0);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}
void reverse(int A[], int N, int i)
{
    if(i>=N/2)
    return;
    swap(A[i], A[N-1-i]);
    reverse(A, N, i+1);
}