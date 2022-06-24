///SetMatrixZeroes
#include<iostream>
using namespace std;
int main()
{
    bool r, c;
    int i, j, N, M;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    r=false;
    c=false;
    for(i=0;i<N;i++)
    {
        if(A[i][0]==0)
        r=true;
    }
    for(i=0;i<M;i++)
    {
        if(A[0][i]==0)
        c=true;
    }
    for(i=1;i<N;i++)
    {
        for(j=1;j<M;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    for(i=1;i<N;i++)
    {
        for(j=1;j<M;j++)
        {
            if((A[i][0]==0)||(A[0][j]==0))
            A[i][j]=0;
        }
    }
    if(r==true)
    {
        for(i=0;i<N;i++)
        A[i][0]=0;
    }
    if(c==true)
    {
        for(i=0;i<M;i++)
        A[0][i]=0;
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}