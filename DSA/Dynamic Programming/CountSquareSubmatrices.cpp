//CountSquareSubmatrices
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, M, c;
    cin>>N>>M;
    int A[N][M], dp[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    c=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            dp[i][j]=A[i][j];
            if(i && j && A[i][j])
            dp[i][j]+=min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
            c+=dp[i][j];
        }
    }
    cout<<c<<endl;
    return 0;
}