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
    int i, n, x, y, q, no, mv, no1, no2;
    cin>>n;
    for(i=1;i<=(n-1);i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(size, -1, sizeof(size));
    memset(dist, -1, sizeof(size));
    memset(intime, -1, sizeof(size));
    memset(outtime, -1, sizeof(size));
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
        cin>>no1>>no2;
        if((intime[no1]<intime[no2])&&(outtime[no1]>outtime[no2]))
        cout<<no2<<" is in the sub tree of "<<no1<<endl;
        else if((intime[no2]<intime[no1])&&(outtime[no2]>outtime[no1]))
        cout<<no1<<" is in the sub tree of "<<no2<<endl;
        else
        cout<<no1<<" and "<<no2<<" are in different sub trees"<<endl;
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