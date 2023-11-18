//DirectedCycle
//KahnAlgorithm
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], bool pathvis[], int &c);
void BFS(int n, vector<int>adj[], int indeg[], int &c);
int main()
{
    int i, N, M, u, v, c;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false}, pathvis[N+1]={false};
    int indeg[N+1]={0};
    c=0;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    DFS(1, adj, vis, pathvis, c);
    c=0;
    BFS(N, adj, indeg, c);
    if(c!=N)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], bool pathvis[], int &c)
{
    vis[n]=true;
    pathvis[n]=true;
    for(auto i:adj[n])
    {
        if(!vis[i])
        DFS(i, adj, vis, pathvis, c);
        else if(pathvis[i])
        c=1;
    }
    pathvis[n]=false;
}
void BFS(int n, vector<int>adj[], int indeg[], int &c)
{
    int i;
    queue<int>q;
    for(i=1;i<=n;i++)
    {
        if(!indeg[i])
        q.push(i);
    }
    while(!q.empty())
    {
        n=q.front();
        q.pop();
        c++;
        for(auto x:adj[n])
        {
            indeg[x]--;
            if(!indeg[x])
            q.push(x);
        }
    }
}