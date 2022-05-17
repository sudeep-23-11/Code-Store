//Subgraphs
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int size[100001];
int dist[100001];
int itime[100001];
int otime[100001];
int t=0;
void DFS(int n);
int main()
{
    int i, n, m, x, y, no, mv;
    cin>>n>>m;
    memset(size, -1, sizeof(size));
    memset(dist, -1, sizeof(dist));
    memset(itime, -1, sizeof(itime));
    memset(otime, -1, sizeof(otime));
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    dist[1]=0;
    t++;
    itime[1]=t;
    DFS(1);
    t++;
    otime[1]=t;
    cin>>no;
    mv=size[no]*dist[no];
    cout<<size[no]<<" "<<dist[no]<<" "<<mv<<endl;
    cin>>x>>y;
    if((itime[x]<itime[y])&&(otime[x]>otime[y]))
    cout<<y<<" is in the subgraph of "<<x<<endl;
    else if((itime[y]<itime[x])&&(otime[y]>otime[x]))
    cout<<x<<" is in the subgraph of "<<y<<endl;
    else
    cout<<x<<" and "<<y<<" are in different subgraphs"<<endl;
    return 0;
}
void DFS(int n)
{
    size[n]=1;
    for(auto i:adj[n])
    {
        dist[i]=dist[n]+1;
        t++;
        itime[i]=t;
        DFS(i);
        t++;
        otime[i]=t;
        size[n]+=size[i];
    }
}