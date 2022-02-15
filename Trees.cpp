//Trees
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int>adj[100001];
int size[100001];
int dist[100001];
int intime[100001];
int outtime[100001];
int t=0;
void DFS(int n);
int main()
{
    int i, n, x, y, q, no, mv;
    cin>>n;
    memset(size, -1, sizeof(size));
    memset(dist, -1, sizeof(dist));
    memset(intime, -1, sizeof(intime));
    memset(outtime, -1, sizeof(outtime));
    for(i=1;i<=(n-1);i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    dist[1]=0;
    t++;
    intime[1]=t;
    DFS(1);
    t++;
    outtime[1]=t;
    cin>>q;
    while(q--)
    {
        cin>>no;
        mv=size[no]*dist[no];
        cout<<size[no]<<" "<<dist[no]<<" "<<mv<<endl;
        cin>>x>>y;
        if((intime[x]<intime[y])&&(outtime[x]>outtime[y]))
        cout<<y<<" is in the sub tree of "<<x<<endl;
        else if((intime[y]<intime[x])&&(outtime[y]>outtime[x]))
        cout<<x<<" is in the sub tree of "<<y<<endl;
        else
        cout<<x<<" and "<<y<<" are in different sub trees"<<endl;
    }
    return 0;
}
void DFS(int n)
{
    size[n]=1;
    for(auto i:adj[n])
    {
        dist[i]=dist[n]+1;
        t++;
        intime[i]=t;
        DFS(i);
        t++;
        outtime[i]=t;
        size[n]+=size[i];
    }
}