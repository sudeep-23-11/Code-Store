//MergeAccounts
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int findparent(int n, int parent[]);
void _union(int u, int v, int parent[], int _rank[]);
int main()
{
    int i, j, N, M;
    string s;
    cin>>N;
    int parent[N+1], _rank[N+1]={0};
    vector<string>v[N+1], u[N+1];
    unordered_map<string, int>mp;
    for(i=1;i<=N;i++)
    parent[i]=i;
    for(i=1;i<=N;i++)
    {
        cin>>M;
        for(j=0;j<M;j++)
        {
            cin>>s;
            if(j)
            {
                if(!mp.count(s))
                mp.insert({s, i});
                else
                _union(i, mp[s], parent, _rank);
            }
            v[i].push_back(s);
        }
    }
    for(auto x:mp)
    u[findparent(x.second, parent)].push_back(x.first);
    for(i=1;i<=N;i++)
    {
        if(!u[i].empty())
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
    return parent[n]=findparent(parent[n], parent);
}
void _union(int u, int v, int parent[], int _rank[])
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