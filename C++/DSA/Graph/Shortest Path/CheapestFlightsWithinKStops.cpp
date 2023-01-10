//CheapestFlightsWithinKStops
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i, n, m, u, v, wt, s, d, k;
    cin>>n>>m;
    vector<pair<int, int>>adj[n+1];
    int dist[n+1];
    queue<pair<int, pair<int, int>>>q;
    for(i=1;i<=n;i++)
    dist[i]=100001;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v, wt));
    }
    cin>>s>>d>>k;
    dist[s]=0;
    q.push(make_pair(0, make_pair(s, 0)));
    while(q.empty()==0)
    {
        auto x=q.front();
        q.pop();
        if((x.first==(k+1))||(x.second.first==d))
        continue;
        for(auto j:adj[x.second.first])
        {
            if(dist[j.first]>(dist[x.second.first]+j.second))
            {
                dist[j.first]=dist[x.second.first]+j.second;
                q.push(make_pair(x.first+1, make_pair(j.first, dist[j.first])));
            }
        }
    }
    cout<<dist[d]<<endl;
    return 0;
}