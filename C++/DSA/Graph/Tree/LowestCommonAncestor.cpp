//LowestCommonAncestor
#include<iostream>
#include<vector>
using namespace std;
bool DFS(int n, vector<int>adj[], vector<int>&v, int N);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    vector<int>up, vp;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cin>>u>>v;
    DFS(1, adj, up, u);
    DFS(1, adj, vp, v);
    i=0;
    while((up[i]==vp[i])&&(i<up.size())&&(i<vp.size()))
    i++;
    cout<<up[i-1]<<endl;
    return 0;
}
bool DFS(int n, vector<int>adj[], vector<int>&v, int N)
{
    v.push_back(n);
    if(n==N)
    return true;
    for(auto i:adj[n])
    {
        if(DFS(i, adj, v, N)==true)
        return true;
    }
    v.pop_back();
    return false;
}