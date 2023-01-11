//RottenOranges
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int BFS(vector<vector<int>>&A);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M, 0));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    cout<<BFS(A)<<endl;
    return 0;
}
int BFS(vector<vector<int>>&A)
{
    int i, j, t, l;
    queue<pair<int, int>>q;
    vector<pair<int, int>>v;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(A[i][j]==2)
            q.push(make_pair(i, j));
        }
    }
    t=-1;
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
                    if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==x.first)||(j==x.second))&&(A[i][j]==1))
                    {
                        A[i][j]=2;
                        q.push(make_pair(i, j));
                    }
                }
            }
        }
        t++;
        v.clear();
    }
    return t;
}