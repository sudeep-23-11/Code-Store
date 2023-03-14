//CountSquareSubmatrices
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, M, s;
    cin>>N>>M;
    int A[N][M], dp[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    s=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if((i==0)||(j==0)||(A[i][j]==0))
            dp[i][j]=A[i][j];
            else
            dp[i][j]=min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
            s+=dp[i][j];
        }
    }
    cout<<s<<endl;
    return 0;
}