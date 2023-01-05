//UndirectedUsingBFS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>adj[], bool vis[], int p, bool &c);
int main()
{
    bool c;
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    c=false;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        BFS(i, adj, vis, -1, c);
    }
    if(c==true)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void BFS(int n, vector<int>adj[], bool vis[], int p, bool &c)
{
    queue<pair<int, int>>q;
    q.push(make_pair(n, p));
    vis[n]=true;
    while(q.empty()==0)
    {
        n=q.front().first;
        p=q.front().second;
        q.pop();
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                q.push(make_pair(i, n));
                vis[i]=true;
            }
            else if(i!=p)
            c=true;
        }
    }
}