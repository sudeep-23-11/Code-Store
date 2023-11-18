//PrimAlgorithm
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int main()
{
    int i, N, M, u, v, wt, n;
    cin>>N>>M;
    vector<pair<int, int>>adj[N+1];
    int key[N+1], parent[N+1];
    bool mst[N+1]={false};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    for(i=1;i<=N;i++)
    key[i]=INT_MAX;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    key[1]=0;
    q.push({0, 1});
    while(!q.empty())
    {
        n=q.top().second;
        q.pop();
        if(mst[n])
        continue;
        mst[n]=true;
        for(auto j:adj[n])
        {
            if(!mst[j.first] && key[j.first]>j.second)
            {
                key[j.first]=j.second;
                parent[j.first]=n;
                q.push({key[j.first], j.first});
            }
        }
    }
    for(i=2;i<=N;i++)
    cout<<parent[i]<<" - "<<i<<endl;
    cout<<endl;
    return 0;
}