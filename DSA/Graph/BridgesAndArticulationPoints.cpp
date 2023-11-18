//BridgesAndArticulationPoints
//TarjanAlgorithm
#include<iostream>
#include<vector>
#include<set>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], int p, int mintime[], int &t, set<int>&ap);
int main()
{
    int i, N, M, u, v, t;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false};
    int mintime[N+1], deg[N+1]={0};
    set<int>ap;
    t=0;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        deg[v]++;
        adj[v].push_back(u);
        deg[u]++;
    }
    cout<<"Bridges"<<endl;
    DFS(1, adj, vis, -1, mintime, t, ap);
    cout<<endl<<"Articulation Points"<<endl;
    for(auto i:ap)
    {
        if(deg[i]!=1)
        cout<<i<<" ";
    }
    cout<<endl;
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
            if(!vis[i])
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