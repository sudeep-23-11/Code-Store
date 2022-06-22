//RotateMatrix
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    for(i=0;i<N;i++)
    {
        for(j=i;j<M;j++)
        swap(A[i][j], A[j][i]);
    }
    for(i=0;i<N;i++)
    reverse(A[i], A[i]+M);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}