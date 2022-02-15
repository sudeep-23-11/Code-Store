//LowestCommonAncestor
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
vector<int>adj[100001];
int parent[100001];
void DFS(int n, int p);
int lca(int x, int y);
int main()
{
    int i, n, q, x, y, l;
    cin>>n;
    memset(parent, -1, sizeof(parent));
    for(i=1;i<=(n-1);i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(1, -1);
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>x>>y;
        l=lca(x, y);
        cout<<l<<endl;
    }
    return 0;
}
void DFS(int n, int p)
{
    parent[n]=p;
    for(auto i:adj[n])
    DFS(i, n);
}
int lca(int x, int y)
{
    int i, m, l;
    vector<int>X, Y;
    i=x;
    while(i!=-1)
    {
        X.push_back(i);
        i=parent[i];
    }
    i=y;
    while(i!=-1)
    {
        Y.push_back(i);
        i=parent[i];
    }
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    m=min(X.size(), Y.size());
    for(i=0;i<m;i++)
    {
        if(X.at(i)==Y.at(i))
        l=X.at(i);
        else
        break;
    }
    return l;
}