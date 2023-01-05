//ReplaceOWithX
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<vector<char>>&A, vector<vector<char>>&R);
int main()
{
    int i, j, N, M;
    cin>>N>>M;
    vector<vector<char>>A(N, vector<char>(M, 'X')), R(N, vector<char>(M, 'X'));
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
void BFS(vector<vector<char>>&A, vector<vector<char>>&R)
{
    int i, j;
    queue<pair<int, int>>q;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(((i==0)||(i==(A.size()-1))||(j==0)||(j==(A[0].size()-1)))&&(A[i][j]=='O'))
            {
                R[i][j]='O';
                q.push(make_pair(i, j));
            }
        }
    }
    while(q.empty()==0)
    {
        auto x=q.front();
        q.pop();
        for(i=x.first-1;i<=(x.first+1);i++)
        {
            for(j=x.second-1;j<=(x.second+1);j++)
            {
                if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==x.first)||(j==x.second))&&(A[i][j]=='O')&&(R[i][j]=='X'))
                {
                    R[i][j]='O';
                    q.push(make_pair(i, j));
                }
            }
        }
    }
}