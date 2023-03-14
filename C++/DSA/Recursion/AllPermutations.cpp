//AllPermutations
#include<iostream>
using namespace std;
void permute(int A[], int N, int i);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    permute(A, N, 0);
    return 0;
}
void permute(int A[], int N, int i)
{
    int j;
    if(i==N)
    {
        for(j=0;j<N;j++)
        cout<<A[j]<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<N;j++)
    {
        swap(A[i], A[j]);
        permute(A, N, i+1);
        swap(A[i], A[j]);
    }
}