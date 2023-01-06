//NumberOfEnclaves
#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
void BFS(vector<vector<int>>&A, set<pair<int, int>>&st);
int main()
{
    int i, j, N, M, c;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M, 0));
    set<pair<int, int>>st;
    c=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            c++;
        }
    }
    BFS(A, st);
    cout<<(c-st.size())<<endl;
    return 0;
}
void BFS(vector<vector<int>>&A, set<pair<int, int>>&st)
{
    int i, j;
    queue<pair<int, int>>q;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(((i==0)||(i==(A.size()-1))||(j==0)||(j==(A[0].size()-1)))&&(A[i][j]==1))
            {
                st.insert(make_pair(i, j));
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
                if((i>=0)&&(i<A.size())&&(j>=0)&&(j<A[0].size())&&((i==x.first)||(j==x.second))&&(A[i][j]==1)&&(st.count(make_pair(i, j))==0))
                {
                    st.insert(make_pair(i, j));
                    q.push(make_pair(i, j));
                }
            }
        }
    }
}