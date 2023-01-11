//DirectedCycleCheckBFS
//KahnAlgorithm
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>adj[], int indeg[], int &c);
int main()
{
    int i, n, m, u, v, c;
    cin>>n>>m;
    vector<int>adj[n+1];
    int indeg[n+1]={0};
    c=0;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    BFS(n, adj, indeg, c);
    if(c!=n)
    cout<<"Cycle present"<<endl;
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}
void BFS(int n, vector<int>adj[], int indeg[], int &c)
{
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(indeg[i]==0)
        q.push(i);
    }
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        c++;
        for(auto i:adj[n])
        {
            indeg[i]--;
            if(indeg[i]==0)
            q.push(i);
        }
    }
}