//LowestCommonAncestor
#include<iostream>
#include<vector>
using namespace std;
vector<int>adj[100001];
bool DFS(int n, int N, vector<int>&v);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cin>>u>>v;
    vector<int>up, vp;
    DFS(1, u, up);
    DFS(1, v, vp);
    i=0;
    while((up[i]==vp[i])&&(i<up.size())&&(i<vp.size()))
    i++;
    cout<<up[i-1]<<endl;
    return 0;
}
bool DFS(int n, int N, vector<int>&v)
{
    v.push_back(n);
    if(n==N)
    return true;
    for(auto i:adj[n])
    {
        if(DFS(i, N, v)==true)
        return true;
    }
    v.pop_back();
    return false;
}