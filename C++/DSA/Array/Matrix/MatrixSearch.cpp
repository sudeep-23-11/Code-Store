//MatrixSearch
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, M, e;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    cin>>e;
    i=0;
    j=M-1;
    while((i<N)&&(j>=0)&&(e!=A[i][j]))
    {
        if(e>A[i][j])
        i++;
        else
        j--;
    }
    if((i>=N)||(j<0))
    cout<<"Not present"<<endl;
    else
    cout<<"Index of "<<e<<" is "<<i<<" "<<j<<endl;
    return 0;
}