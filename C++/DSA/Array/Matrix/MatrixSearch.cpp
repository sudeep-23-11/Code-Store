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
    while(i<N && j>=0)
    {
        if(e==A[i][j])
        {
            cout<<i<<" "<<j<<endl;
            exit(0);
        }
        else if(e<A[i][j])
        j--;
        else
        i++;
    }
    
    cout<<-1<<endl;
    return 0;
}