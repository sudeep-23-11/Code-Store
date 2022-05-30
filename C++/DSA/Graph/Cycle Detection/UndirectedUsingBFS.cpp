//UndirectedUsingBFS
#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
bool c;
void BFS(int n, int p);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
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
        BFS(i, -1);
    }
    if(c==true)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void BFS(int n, int p)
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
            else if((vis[i]==true)&&(i!=p))
            {
                c=true;
                return;
            }
        }
    }
}