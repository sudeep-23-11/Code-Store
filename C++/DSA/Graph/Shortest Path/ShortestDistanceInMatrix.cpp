//ShortestDistanceInMatrix
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i, j, N, M, sr, sc, dr, dc, r, c;
    cin>>N>>M;
    int A[N][M];
    int dist[N][M];
    queue<pair<int, pair<int, int>>>q;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            dist[i][j]=100001;
        }
    }
    cin>>sr>>sc;
    cin>>dr>>dc;
    dist[sr][sc]=0;
    q.push(make_pair(0, make_pair(sr, sc)));
    while(q.empty()==0)
    {
        r=q.front().second.first;
        c=q.front().second.second;
        q.pop();
        for(i=r-1;i<=(r+1);i++)
        {
            for(j=c-1;j<=(c+1);j++)
            {
                if((i>=0)&&(i<N)&&(j>=0)&&(j<M)&&((i==r)||(j==c))&&(A[i][j]==1)&&(dist[i][j]>(dist[r][c]+1)))
                {
                    dist[i][j]=dist[r][c]+1;
                    q.push(make_pair(dist[i][j], make_pair(i, j)));
                }
            }
        }
    }
    cout<<dist[dr][dc]<<endl;
    return 0;
}