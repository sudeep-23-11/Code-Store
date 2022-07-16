//DirectedUsingBFS
//KahnAlgorithm
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
int indeg[100001];
int c;
void BFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    memset(indeg, 0, sizeof(indeg));
    c=0;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    BFS(n);
    if(c!=n)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void BFS(int n)
{
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(indeg[i]==0)
        {
            q.push(i);
            vis[i]=true;
        }
    }
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        c++;
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                indeg[i]--;
                if(indeg[i]==0)
                {
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
    }
}