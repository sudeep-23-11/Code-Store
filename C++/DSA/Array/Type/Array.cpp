//Array
#include<iostream>
void display(int A[], int N);
void insert(int A[], int N, int idx, int ele);
void _delete(int A[], int N, int idx);
using namespace std;
int main()
{
    int i, N, idx, ele;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Insert Index and Element"<<endl;
    cin>>idx>>ele;
    insert(A, N, idx, ele);
    display(A, N);
    cout<<"Delete Index"<<endl;
    cin>>idx;
    _delete(A, N, idx);
    display(A, N-1);
    return 0;
}
void display(int A[], int N)
{
    int i;
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
}
void insert(int A[], int N, int idx, int ele)
{
    int i;
    for(i=(N-1);i>idx;i--)
    A[i]=A[i-1];
    A[idx]=ele;
}
void _delete(int A[], int N, int idx)
{
    int i;
    for(i=idx;i<(N-1);i++)
    A[i]=A[i+1];
}