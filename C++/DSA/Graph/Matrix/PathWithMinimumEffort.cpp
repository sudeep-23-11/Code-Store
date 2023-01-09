//PathWithMinimumEffort
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i, j, N, M, r, c;
    cin>>N>>M;
    int A[N][M];
    int effort[N][M];
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>q;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            effort[i][j]=100001;
        }
    }
    effort[0][0]=0;
    q.push(make_pair(0, make_pair(0, 0)));
    while(q.empty()==0)
    {
        r=q.top().second.first;
        c=q.top().second.second;
        q.pop();
        for(i=r-1;i<=(r+1);i++)
        {
            for(j=c-1;j<=(c+1);j++)
            {
                if((i>=0)&&(i<N)&&(j>=0)&&(j<M)&&((i==r)||(j==c))&&(effort[i][j]>max(effort[r][c], abs(A[i][j]-A[r][c]))))
                {
                    effort[i][j]=max(effort[r][c], abs(A[i][j]-A[r][c]));
                    q.push(make_pair(effort[i][j], make_pair(i, j)));
                }
            }
        }
    }
    cout<<effort[N-1][M-1]<<endl;
    return 0;
}