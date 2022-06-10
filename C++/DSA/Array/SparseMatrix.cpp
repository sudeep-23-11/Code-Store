//SparseMatrix
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, M, c;
    c=0;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            if(A[i][j]!=0)
            c++;
        }
    }
    int spma[3][c];
    c=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(A[i][j]!=0)
            {
                spma[0][c]=i;
                spma[1][c]=j;
                spma[2][c]=A[i][j];
                c++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<c;j++)
        cout<<spma[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}