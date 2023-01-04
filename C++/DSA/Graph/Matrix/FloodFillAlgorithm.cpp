//FloodFillAlgorithm
#include<iostream>
#include<vector>
using namespace std;
void DFS(int r, int c, vector<vector<int>>&A, int co);
int main()
{
    int i, j, N, M, r, c, co;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M, 0));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    cin>>r>>c>>co;
    DFS(r, c, A, co);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
void DFS(int r, int c, vector<vector<int>>&A, int co)
{
    int i, j, p;
    p=A[r][c];
    A[r][c]=co;
    for(i=r-1;i<=(r+1);i++)
    {
        for(j=c-1;j<=(c+1);j++)
        {
            if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==r)||(j==c))&&(A[i][j]==p))
            DFS(i, j, A, co);
        }
    }
}