//SubtreeCheck
#include<iostream>
#include<vector>
using namespace std;
void DFS(int n, vector<int>adj[], int intime[], int outtime[], int &t);
int main()
{
    int i, n, m, u, v, t;
    cin>>n>>m;
    vector<int>adj[n+1];
    int intime[n+1];
    int outtime[n+1];
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    t=0;
    DFS(1, adj, intime, outtime, t);
    cin>>u>>v;
    if((intime[u]<intime[v])&&(outtime[u]>outtime[v]))
    cout<<v<<" is in subtree of "<<u<<endl;
    else if((intime[v]<intime[u])&&(outtime[v]>outtime[u]))
    cout<<u<<" is in subtree of "<<v<<endl;
    else
    cout<<u<<" and "<<v<<" are not in subtrees of each other"<<endl;
    return 0;
}
void DFS(int n, vector<int>adj[], int intime[], int outtime[], int &t)
{
    t++;
    intime[n]=t;
    for(auto i:adj[n])
    DFS(i, adj, intime, outtime, t);
    t++;
    outtime[n]=t;
}