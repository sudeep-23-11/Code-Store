//GraphBFS
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
void BFS(int n);
int main()
{
    int i, n, m, x, y;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        BFS(i);
    }
    return 0;
}
void BFS(int n)
{
    vis[n]=true;
    queue<int>q;
    q.push(n);
    while(q.empty()==0)
    {
        n=q.front();
        cout<<"Visited Node "<<n<<endl;
        q.pop();
        for(auto i:adj[n])
        {
            if(vis[i]==false)
            {
                vis[i]=true;
                q.push(i);
            }
        }
    }
}