//AccountsMerge
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int _rank[], int parent[]);
int main()
{
    int i, j, n, m;
    string s;
    cin>>n;
    int _rank[n+1]={0};
    int parent[n+1];
    vector<string>v[n+1], u[n+1];
    map<string, int>mp;
    for(i=1;i<=n;i++)
    parent[i]=i;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>s;
            if(j!=0)
            {
                if(mp.count(s)==0)
                mp.insert(make_pair(s, i));
                else
                _union(i, mp[s], _rank, parent);
            }
            v[i].push_back(s);
        }
    }
    for(auto x:mp)
    u[findparent(x.second, parent)].push_back(x.first);
    for(i=1;i<=n;i++)
    {
        if(u[i].empty()==0)
        {
            cout<<v[i][0]<<" ";
            sort(u[i].begin(), u[i].end());
            for(auto x:u[i])
            cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}
int findparent(int n, int parent[])
{
    if(parent[n]==n)
    return n;
    else
    return parent[n]=findparent(parent[n], parent);
}
void _union(int u, int v, int _rank[], int parent[])
{
    u=findparent(u, parent);
    v=findparent(v, parent);
    if(_rank[u]>_rank[v])
    parent[v]=u;
    else if(_rank[u]<_rank[v])
    parent[u]=v;
    else
    {
        _rank[u]++;
        parent[v]=u;
    }
}