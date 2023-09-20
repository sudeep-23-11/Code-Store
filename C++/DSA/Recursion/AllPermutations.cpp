//AllPermutations
#include<iostream>
using namespace std;
void func(int i, int A[], int N);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    func(0, A, N);
    return 0;
}
void func(int i, int A[], int N)
{
    int j;
    if(i==N-1)
    {
        for(j=0;j<N;j++)
        cout<<A[j]<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<N;j++)
    {
        swap(A[i], A[j]);
        func(i+1, A, N);
        swap(A[i], A[j]);
    }
}