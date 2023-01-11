//NumberOfDistinctIslands
#include<iostream>
#include<vector>
#include<set>
using namespace std;
void DFS(int r, int c, vector<vector<int>>&A, vector<vector<bool>>&vis, int &sr, int &sc, vector<pair<int, int>>&v);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M, 0));
    vector<vector<bool>>vis(N, vector<bool>(M, false));
    set<vector<pair<int, int>>>st;
    vector<pair<int, int>>v;
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
                DFS(i, j, A, vis, i, j, v);
                st.insert(v);
                v.clear();
            }
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
void DFS(int r, int c, vector<vector<int>>&A, vector<vector<bool>>&vis, int &sr, int &sc, vector<pair<int, int>>&v)
{
    int i, j;
    vis[r][c]=true;
    v.push_back(make_pair((r-sr), (c-sc)));
    for(i=r-1;i<=(r+1);i++)
    {
        for(j=c-1;j<=(c+1);j++)
        {
            if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==r)||(j==c))&&(A[i][j]==1)&&(vis[i][j]==false))
            DFS(i, j, A, vis, sr, sc, v);
        }
    }
}