//SurroundedRegions
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<vector<char>>&A);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<char>>A(N, vector<char>(M));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    BFS(A);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
void BFS(vector<vector<char>>&A)
{
    int i, j, x, y;
    queue<pair<int, int>>q;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if((!i || i==A.size()-1 || !j || j==A[0].size()-1) && A[i][j]=='O')
            {
                q.push({i, j});
                A[i][j]='$';
            }
        }
    }
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(i=x-1;i<=x+1;i++)
        {
            for(j=y-1;j<=y+1;j++)
            {
                if(i>=0 && i<A.size() && j>=0 && j<A[0].size() && (i==x || j==y) && A[i][j]=='O')
                {
                    q.push({i, j});
                    A[i][j]='$';
                }
            }
        }
    }
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(A[i][j]=='O')
            A[i][j]='X';
            else if(A[i][j]=='$')
            A[i][j]='O';
        }
    }
}