//MinimumEffortPath
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    int A[N][M], effort[N][M];
    vector<int>v;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>q;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            effort[i][j]=INT_MAX;
        }
    }
    effort[0][0]=0;
    q.push({0, 0, 0});
    while(!q.empty())
    {
        v=q.top();
        q.pop();
        for(i=v[1]-1;i<=v[1]+1;i++)
        {
            for(j=v[2]-1;j<=v[2]+1;j++)
            {
                if(i>=0 && i<N && j>=0 && j<M && (i==v[1] || j==v[2]) && effort[i][j]>max(v[0], abs(A[i][j]-A[v[1]][v[2]])))
                {
                    effort[i][j]=max(v[0], abs(A[i][j]-A[v[1]][v[2]]));
                    q.push({effort[i][j], i, j});
                }
            }
        }
    }
    cout<<effort[N-1][M-1]<<endl;
    return 0;
}