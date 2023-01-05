//BridgesAndArticulationPoints
//TarjanAlgorithm
#include<iostream>
#include<vector>
#include<set>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], int p, int mintime[], int &t, set<int>&ap);
int main()
{
    int i, n, m, u, v, t;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    int mintime[n+1]={-1};
    int deg[n+1]={0};
    set<int>ap;
    t=0;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        deg[v]++;
        adj[v].push_back(u);
        deg[u]++;
    }
    DFS(1, adj, vis, -1, mintime, t, ap);
    for(auto i:ap)
    {
        if(deg[i]!=1)
        cout<<i<<" ";
    }
    return 0;
}
void DFS(int n, vector<int>adj[], bool vis[], int p, int mintime[], int &t, set<int>&ap)
{
    vis[n]=true;
    t++;
    mintime[n]=t;
    for(auto i:adj[n])
    {
        if(i!=p)
        {
            if(vis[i]==false)
            DFS(i, adj, vis, n, mintime, t, ap);
            if(mintime[i]>mintime[n])
            {
                cout<<n<<" - "<<i<<endl;
                ap.insert(i);
                ap.insert(n);
            }
            mintime[n]=min(mintime[n], mintime[i]);
        }
    }
}