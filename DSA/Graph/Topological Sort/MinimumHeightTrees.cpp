#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>adj[], int deg[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    int deg[n+1]={0};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    BFS(n, adj, deg);
    return 0;
}
void BFS(int n, vector<int>adj[], int deg[])
{
    int i, l;
    queue<int>q;
    vector<int>v;
    for(i=1;i<=n;i++)
    {
        if(deg[i]==1)
        q.push(i);
    }
    while(!q.empty())
    {
        l=q.size();
        v.clear();
        while(l--)
        {
            n=q.front();
            q.pop();
            v.push_back(n);
            for(auto x:adj[n])
            {
                deg[x]--;
                if(deg[x]==1)
                q.push(x);
            }
        }
    }
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}