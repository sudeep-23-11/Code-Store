//SubsetI
#include<iostream>
using namespace std;
void subsequence(int A[], int N, int i, int s);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    subsequence(A, N, 0, 0);
    return 0;
}
void subsequence(int A[], int N, int i, int s)
{
    if(i==N)
    {
        cout<<s<<endl;
        return;
    }
    subsequence(A, N, i+1, (s+A[i]));
    subsequence(A, N, i+1, s);
}