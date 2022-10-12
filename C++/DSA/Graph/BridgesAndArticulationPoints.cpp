//BridgesAndArticulationPoints
#include<iostream>
#include<vector>
#include<set>
#include<cstring>
using namespace std;
vector<int>adj[100001];
bool vis[100001];
int _min[100001];
int deg[100001];
set<int>ap;
int t;
void DFS(int n, int p);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    memset(_min, -1, sizeof(_min));
    memset(deg, 0, sizeof(deg));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    t=0;
    DFS(1, -1);
    for(auto i:ap)
    {
        if(deg[i]!=1)
        cout<<i<<" ";
    }
    return 0;
}
void DFS(int n, int p)
{
    vis[n]=true;
    t++;
    _min[n]=t;
    for(auto i:adj[n])
    {
        deg[n]++;
        if(i!=p)
        {
            if(vis[i]==false)
            DFS(i, n);
            if(_min[i]>_min[n])
            {
                cout<<n<<" - "<<i<<endl;
                ap.insert(i);
                ap.insert(n);
            }
            _min[n]=min(_min[n], _min[i]);
        }
    }
}