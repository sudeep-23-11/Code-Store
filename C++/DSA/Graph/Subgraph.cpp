//Subgraph
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int intime[100001];
int outtime[100001];
int t;
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(intime, -1, sizeof(intime));
    memset(outtime, -1, sizeof(outtime));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    t=1;
    intime[1]=t;
    DFS(1);
    t++;
    outtime[1]=t;
    cin>>u>>v;
    if((intime[u]<intime[v])&&(outtime[u]>outtime[v]))
    cout<<v<<" is in subgraph of "<<u<<endl;
    else if((intime[v]<intime[u])&&(outtime[v]>outtime[u]))
    cout<<u<<" is in subgraph of "<<v<<endl;
    else
    cout<<u<<" and "<<v<<" are not in subgraphs of each other"<<endl;
    return 0;
}
void DFS(int n)
{
    for(auto i:adj[n])
    {
        t++;
        intime[i]=t;
        DFS(i);
        t++;
        outtime[i]=t;
    }
}