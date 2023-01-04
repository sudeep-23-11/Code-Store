//NumberOfIslands
#include<iostream>
#include<vector>
using namespace std;
void DFS(int r, int c, vector<vector<int>>&A, vector<vector<bool>>&vis);
int main()
{
    int i, j, N, M, c;
    cin>>N>>M;
    c=0;
    vector<vector<int>>A(N, vector<int>(M, 0));
    vector<vector<bool>>vis(N, vector<bool>(M, false));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if((A[i][j]==1)&&(vis[i][j]==false))
            {
                DFS(i, j, A, vis);
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
void DFS(int r, int c, vector<vector<int>>&A, vector<vector<bool>>&vis)
{
    int i, j;
    vis[r][c]=true;
    for(i=r-1;i<=(r+1);i++)
    {
        for(j=c-1;j<=(c+1);j++)
        {
            if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&(A[i][j]==1)&&(vis[i][j]==false))
            DFS(i, j, A, vis);
        }
    }
}