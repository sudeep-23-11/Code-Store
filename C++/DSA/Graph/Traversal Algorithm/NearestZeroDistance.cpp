//NearestZeroDistance
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<vector<int>>&A, vector<vector<int>>&R);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M)), R(N, vector<int>(M, -1));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    BFS(A, R);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<R[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
void BFS(vector<vector<int>>&A, vector<vector<int>>&R)
{
    int i, j, c, l, x, y;
    queue<pair<int, int>>q;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(!A[i][j])
            {
                q.push({i, j});
                R[i][j]=0;
            }
        }
    }
    c=0;
    while(!q.empty())
    {
        l=q.size();
        c++;
        while(l--)
        {
            x=q.front().first;
            y=q.front().second;
            q.pop();
            for(i=x-1;i<=x+1;i++)
            {
                for(j=y-1;j<=y+1;j++)
                {
                    if(i>=0 && i<A.size() && j>=0 && j<A[0].size() && (i==x || j==y) && A[i][j] && R[i][j]==-1)
                    {
                        q.push({i, j});
                        R[i][j]=c;
                    }
                }
            }
        }
    }
}