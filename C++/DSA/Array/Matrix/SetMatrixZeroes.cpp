///SetMatrixZeroes
#include<iostream>
using namespace std;
int main()
{
    bool r, c;
    int i, j, N, M;
    cin>>N>>M;
    int A[N][M];
    r=false;
    c=false;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            if(!j && !A[i][j])
            r=true;
            if(!i && !A[i][j])
            c=true;
        }
    }
    for(i=1;i<N;i++)
    {
        for(j=1;j<M;j++)
        {
            if(!A[i][j])
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
            if(!A[i][0] || !A[0][j])
            A[i][j]=0;
        }
    }
    if(r)
    {
        for(i=0;i<N;i++)
        A[i][0]=0;
    }
    if(c)
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