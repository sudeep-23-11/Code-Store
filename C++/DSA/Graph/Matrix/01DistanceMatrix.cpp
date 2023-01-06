//01DistanceMatrix
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<vector<int>>&A, vector<vector<int>>&R);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M, 0)), R(N, vector<int>(M, -1));
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
    int i, j, t, l;
    queue<pair<int, int>>q;
    vector<pair<int, int>>v;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(A[i][j]==1)
            {
                R[i][j]=0;
                q.push(make_pair(i, j));
            }
        }
    }
    t=1;
    while(q.empty()==0)
    {
        l=q.size();
        for(i=0;i<l;i++)
        {
            v.push_back(q.front());
            q.pop();
        }
        for(auto x:v)
        {
            for(i=x.first-1;i<=(x.first+1);i++)
            {
                for(j=x.second-1;j<=(x.second+1);j++)
                {
                    if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==x.first)||(j==x.second))&&(A[i][j]==0)&&(R[i][j]==-1))
                    {
                        R[i][j]=t;
                        q.push(make_pair(i, j));
                    }
                }
            }
        }
        t++;
        v.clear();
    }
}